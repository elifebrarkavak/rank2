#include <stdio.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
	int i=0;
	int j;
	while(s[i])
	{
		j=0;
		while(reject[j])
		{
			if(s[i] == reject[j])
				return i;
			j++;
		}
		i++;
	}
	return i;
}

// #include <stdio.h>
// #include <string.h>

// // ft_strcspn fonksiyonunuzun prototipini buraya yazın
// size_t ft_strcspn(const char *s, const char *reject);

// void test_strcspn(const char *s, const char *reject) {
//     size_t original_result = strcspn(s, reject);
//     size_t ft_result = ft_strcspn(s, reject);

//     printf("String: \"%s\"\n", s);
//     printf("Reject: \"%s\"\n", reject);
//     printf("Original strcspn: %zu\n", original_result);
//     printf("ft_strcspn:       %zu\n", ft_result);
//     if (original_result == ft_result) {
//         printf("Result: ✅ Passed\n");
//     } else {
//         printf("Result: ❌ Failed\n");
//     }
//     printf("---------------\n");
// }

// int main() {
//     // Test cases
//     const char *test_strings[] = {
//         "hello, world!",
//         "42 school",
//         "test string",
//         "abcdef",
//         "",
//         NULL
//     };

//     const char *reject_strings[] = {
//         "aeiou",
//         "0123456789",
//         "xyz",
//         "",
//         "abcdef",
//         NULL
//     };

//     // Tüm test kombinasyonlarını dener
//     for (int i = 0; test_strings[i] != NULL; i++) {
//         for (int j = 0; reject_strings[j] != NULL; j++) {
//             test_strcspn(test_strings[i], reject_strings[j]);
//         }
//     }

//     return 0;
// }
