#ifndef livekit_ffi
#define livekit_ffi

/* Warning, this file is autogenerated. Don't modify this manually. */

#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <ostream>
#include <new>

using FfiHandleId = size_t;

constexpr static const FfiHandleId INVALID_HANDLE = 0;

extern "C" {

FfiHandleId livekit_ffi_request(const uint8_t *data,
                                size_t len,
                                const uint8_t **res_ptr,
                                size_t *res_len);

bool livekit_ffi_drop_handle(FfiHandleId handle_id);

} // extern "C"

#endif // livekit_ffi