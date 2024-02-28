#include "main.h"

int process_command(char *line, char **env) {
    
    char *args[MAX_ARGS];
    int i = 0;
    args[i] = strtok(line, " ");
    while (args[i] != NULL && i + 1 < MAX_ARGS) {
        i++;
        args[i] = strtok(NULL, " ");
    }
    args[i] = NULL;  

    
    if (strcmp(args[0], "exit") == 0) {
        exit(0);  
    } else if (strcmp(args[0], "env") == 0) {
        disp_env(env);  
        return 0;  
    } else {
        
        int pid = fork();
        if (pid == 0) {
            
            execve(args[0], args, env);
            fprintf(stderr, "Error: %s: No such file or directory\n", args[0]);
            exit(1);
        } else if (pid > 0) {
            
            wait(NULL);
        } else {
            
            perror("fork");
            return 1;
        }
    }

    return 0;  
}

