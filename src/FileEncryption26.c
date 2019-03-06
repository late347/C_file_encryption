/*
 ============================================================================
 Name        : FileEncryption26.c
 Author      : late
 Version     :
 Copyright   : Your copyright notice
 Description : File encryption/ file obfuscation in C, Ansi-style

 Main purpose of this program was to have already copy-pasted 5 files from wikipedia articles into
 text files into the same folder where you run this program. Then with this program, you can
 encrypt the files with a five-key setting into a "jumbled up" file, so people cant read it easily.
 This results in a single encrypted file.


 The counterpart decryption program will be in a separate C-project. That decryption program should have
 the following inputs available to it:

 1) total amount of files that were sourced from (five in this case by default)
 2) total amount of characters in each of the sourced text files + 5 EOF chars,
 so that basically the total amount of characters in encrypted file is known
 3) the keysettings that were used to encrypt the sourced text files
 4) the encrypted text file is available in the directory

 5) if you want to test the program you can remove the variableencrypted.txt file
 but keep those happi.txt type of files
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	FILE*pointerhiili = fopen("C:\\Users\\Lauri\\eclipse-workspace\\FileEncryption26\\hiili.txt", "r");
	FILE*pointerhappi = fopen("C:\\Users\\Lauri\\eclipse-workspace\\FileEncryption26\\happi.txt", "r");
	FILE*pointerplatina = fopen("C:\\Users\\Lauri\\eclipse-workspace\\FileEncryption26\\platina.txt", "r");
	FILE*pointertitaani = fopen("C:\\Users\\Lauri\\eclipse-workspace\\FileEncryption26\\titaani.txt", "r");
	FILE*pointerpii = fopen("C:\\Users\\Lauri\\eclipse-workspace\\FileEncryption26\\pii.txt", "r");
	FILE*pointerencrypted = fopen("C:\\Users\\Lauri\\eclipse-workspace\\FileEncryption26\\variableencrypted.txt", "w+");

	int a = 0, b = 0, c = 0, d = 0, e = 0; //boolean variables to write from the file or not (into encryptedFile)
	char letter = 'a'; //currently written char
	int i = 0, j = 0, k = 0; //some loop variables maybe I forgot if theyre necessary
	int first = 2, second = 5, third = 3, fourth = 3, fifth = 4; //default encryption scheme 1 1 1 1 1 but it's set by user

	int input = 7;

	//hiili
	//happi
	//platina
	//titaani
	//pii

	printf(
			"kerro salaustaso spaceilla erotetuilla numeroilla esim 4 7 5 2 1 älä laita nollaa");
	//scanf("%d %d %d %d %d", &first, &second, &third, &fourth, &fifth);
	// asks user for encryption scheme

	while (!(a && b && c && d && e)) {
		if (a == 0) {
			for (i = 0; i < first; i++) {
				letter = fgetc(pointerhiili);

				if (letter == EOF) {
					a = 1;
					//letter=7;
					fputc(letter, pointerencrypted);
					break;
				} else {
					fputc(letter, pointerencrypted);
				}
			}

		}

		if (b == 0) {
			for (j = 0; j < second; j++) {
				letter = fgetc(pointerhappi);
				if (letter == EOF) {
					b = 1;
					fputc(letter, pointerencrypted);
					break;
				} else {
					fputc(letter, pointerencrypted);

				}
			}
		}

		if (c == 0) {
			for (j = 0; j < third; j++) {
				letter = fgetc(pointerplatina);
				if (letter == EOF) {
					c = 1;
					fputc(letter, pointerencrypted);
					break;
				} else {
					fputc(letter, pointerencrypted);

				}
			}
		}

		if (d == 0) {
			for (j = 0; j < fourth; j++) {
				letter = fgetc(pointertitaani);
				if (letter == EOF) {
					d = 1;
					fputc(letter, pointerencrypted);
					break;
				} else {
					fputc(letter, pointerencrypted);

				}
			}
		}

		if (e == 0) {
			for (j = 0; j < fifth; j++) {
				letter = fgetc(pointerpii);
				if (letter == EOF) {
					e = 1;
					fputc(letter, pointerencrypted);
					break;
				} else {
					fputc(letter, pointerencrypted);

				}
			}
		}
	}

	fclose(pointerhiili);
	fclose(pointerhappi);
	fclose(pointerpii);
	fclose(pointerplatina);
	fclose(pointertitaani);
	fclose(pointerencrypted);
	printf("finished encrypting, ending program...");

	return 0;
}
