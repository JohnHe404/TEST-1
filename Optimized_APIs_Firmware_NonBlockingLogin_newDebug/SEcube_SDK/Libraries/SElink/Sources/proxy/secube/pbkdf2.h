#pragma once

#include <stdint.h>
#include <string.h>

#include "sha256.h"

#ifdef __cplusplus
extern "C" {
#endif

	void PBKDF2HmacSha256(
		const uint8_t *pw, size_t npw,
		const uint8_t *salt, size_t nsalt,
		uint32_t iterations,
		uint8_t *out, size_t nout);

#ifdef __cplusplus
}
#endif
