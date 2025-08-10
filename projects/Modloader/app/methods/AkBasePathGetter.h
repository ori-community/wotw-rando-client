#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkBasePathGetter.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AkBasePathGetter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GetCustomPlatformName, app::String** platform_name)
    IL2CPP_REGISTER_METHOD(0x026CE960, app::String*, GetPlatformName, )
    IL2CPP_REGISTER_METHOD(0x026CEA20, app::String*, GetPlatformBasePath, )
    IL2CPP_REGISTER_METHOD(0x026CEC70, app::String*, GetFullSoundBankPath, )
    IL2CPP_REGISTER_METHOD(0x026CEDF0, void, FixSlashes_1, app::String** path, char16_t separator_char, char16_t bad_char, bool add_trailing_slash)
    IL2CPP_REGISTER_METHOD(0x026CEFA0, void, FixSlashes_2, app::String** path)
    IL2CPP_REGISTER_METHOD(0x026CF0B0, app::String*, GetSoundbankBasePath, )
    IL2CPP_REGISTER_METHOD(0x026CF210, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AkBasePathGetter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026CF2C0, void, cctor, )
} // namespace app::classes::AkBasePathGetter
