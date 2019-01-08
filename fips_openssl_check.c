#include <openssl/err.h>
#include <string.h>

int main() {
  if (FIPS_mode() || FIPS_mode_set(1)) {
    printf("Installed library has FIPS support\n");
    return 0;
  }

  const char* err_str = ERR_error_string(ERR_get_error(), 0);
  printf("Failed to enable FIPS mode, %s\n", err_str);
  if (strstr(err_str, "0F06D065")) {
    printf("Installed library does not have FIPS support\n");
  }

  return 0;
}
