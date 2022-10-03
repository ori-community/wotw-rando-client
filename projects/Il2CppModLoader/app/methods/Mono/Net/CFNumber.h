#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Net::CFNumber {
    IL2CPP_REGISTER_METHOD(0x02177D80, bool, CFNumberGetValue, (void* handle, void* type, int32_t* value))
    IL2CPP_REGISTER_METHOD(0x02177E40, int32_t, AsInt32, (void* handle))
} // namespace app::classes::Mono::Net::CFNumber
