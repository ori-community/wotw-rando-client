#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Threading::PlatformHelper {
    IL2CPP_REGISTER_METHOD(0x023293C0, int32_t, get_ProcessorCount, )
    IL2CPP_REGISTER_METHOD(0x023294F0, bool, get_IsSingleProcessor, )
} // namespace app::classes::System::Threading::PlatformHelper
