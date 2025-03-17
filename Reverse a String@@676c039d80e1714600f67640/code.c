int main() {
    char str[100], temp;
    int start, end, length;

    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    length = strlen(str);
    start = 0;
    end = length - 1;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf(str);

    return 0;
}