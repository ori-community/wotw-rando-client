#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::PlatformHelper {
    IL2CPP_REGISTER_METHOD(0x023293C0, int32_t, get_ProcessorCount, ())
    IL2CPP_REGISTER_METHOD(0x023294F0, bool, get_IsSingleProcessor, ())
}
