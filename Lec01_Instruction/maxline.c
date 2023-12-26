#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

main() {
	int len, max;							/*현재 행 및 최장 행의 길이*/
	char line[MAXLINE], longest[MAXLINE];	/*현재 행 및 최장 행*/

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%s", longest);
	return 0;
}

int getline(char line[], int maxline) {
	int c, i;
	for (i = 0; i < maxline - 1 && ((c = getchar()) != EOF) && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n')
		line[i] = c, ++i;				/*null 문자('\0') 인덱싱*/
	line[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i;
	i = 0;
	while ((to[i]) = from[i] != '\0')
		++i;
}