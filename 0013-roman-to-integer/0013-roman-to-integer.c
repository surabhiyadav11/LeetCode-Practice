int romanToInt(char* s) {
    int result = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        int curr, next;

        switch(s[i]) {
            case 'I': curr = 1; break;
            case 'V': curr = 5; break;
            case 'X': curr = 10; break;
            case 'L': curr = 50; break;
            case 'C': curr = 100; break;
            case 'D': curr = 500; break;
            case 'M': curr = 1000; break;
            default: curr = 0;
        }

        if (i+1 < len) {
            switch(s[i+1]) {
                case 'I': next = 1; break;
                case 'V': next = 5; break;
                case 'X': next = 10; break;
                case 'L': next = 50; break;
                case 'C': next = 100; break;
                case 'D': next = 500; break;
                case 'M': next = 1000; break;
                default: next = 0;
            }
        } else {
            next = 0;
        }

        if (curr < next)
            result -= curr;
        else
            result += curr;
    }

    return result;
}
