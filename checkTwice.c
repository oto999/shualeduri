int checkTwice(){
    
        max = 0;
    while ((len = length(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    
        if (max > 0) {
        longest1 = true;
    }

        while ((len = length(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    
}