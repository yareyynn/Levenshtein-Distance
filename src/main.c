#include "levenshtein.h"

int	main(int argc, char *argv[])
{
	int			result;
	const char	*str1 = "Bu bir test cumlesidir.";
	const char	*str2 = "BU bir rset cumlsedir.";

	/* Arguman girilmezse kod icinde onceden belirtilen iki kelime arasindaki 
	uzakligi hesapliyoruz. */
	if (argc == 1)
	{
		printf("\nArguman 1: %s\n", str1);
		printf("Arguman 2: %s\n", str2);
		result = levenshtein_distance(str1, str2, 1);
		printf("\nLevenshtein Distance: %d\n\n", result);
		return (result);
	}
	/* Eger 2 arguman giriliyorsa default olarak matrisi yazdirmiyoruz. */
	else if (argc == 3)
	{
		printf("\nArguman 1: %s\n", argv[1]);
		printf("Arguman 2: %s\n", argv[2]);
		result = levenshtein_distance(argv[1], argv[2], '0');
		printf("\nLevenshtein Distance: %d\n\n", result);
		return (result);
	}
	/* Eger 3. arguman 1 ise matrisi yazdiriyoruz. */
	else if (argc >= 4)
	{
		printf("\nArguman 1: %s\n", argv[1]);
		printf("Arguman 2: %s\n", argv[2]);
		if (argv[3][0] == '1')
		{
			result = levenshtein_distance(argv[1], argv[2], 1);
			printf("\nLevenshtein Distance: %d\n\n", result);
		}
		else
		{
			result = levenshtein_distance(argv[1], argv[2], 0);
			printf("\nLevenshtein Distance: %d\n\n", result);
		}
		return (result);
	}
	/* Hatali arguman girisi durumunda kullaniciya bilgi veriyoruz. */
	else
	{
		printf("\nKullanım: %s <kelime1> <kelime2> <matris_flag>\n\n"
			"Argümanlar:\n"
			"   <kelime1>       Birinci kelime (zorunlu)\n"
			"   <kelime2>       Ikinci kelime (zorunlu)\n"
			"   <matris_flag>   Matris yazdirma kontrolu "
			"(1: yazdir, 0: yazdirma, varsayilan: 0)\n\n", argv[0]);
		return (-1);
	}
}
