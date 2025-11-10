#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuanHoa(char s[]) {
    int i = 0, j = 0;
    while (s[i] != '\0') {
        if (!isspace(s[i])) {
            s[j++] = s[i];
            if (isspace(s[i + 1])) s[j++] = ' ';
        }
        i++;
    }
    s[j] = '\0';

    int len = strlen(s);
    s[0] = toupper(s[0]);
    for (int k = 1; k < len; k++) {
        if (s[k - 1] == ' ')
            s[k] = toupper(s[k]);
        else
            s[k] = tolower(s[k]);
    }
}

int main() {
    char s[100];
    printf("Nhap ho ten: ");
    fgets(s, sizeof(s), stdin);
    if (s[strlen(s) - 1] == '\n') s[strlen(s) - 1] = '\0';

    chuanHoa(s);
    printf("Ho ten chuan hoa: %s\n", s);
    return 0;
}
