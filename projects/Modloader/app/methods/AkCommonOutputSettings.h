#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkCommonOutputSettings.h>
#include <Modloader/app/structs/AkOutputSettings.h>

namespace app::classes::AkCommonOutputSettings {
    IL2CPP_REGISTER_METHOD(0x026D9E60, void, CopyTo, (app::AkCommonOutputSettings * this_ptr, app::AkOutputSettings* settings))
    IL2CPP_REGISTER_METHOD(0x026D9F80, void, ctor, (app::AkCommonOutputSettings * this_ptr))
} // namespace app::classes::AkCommonOutputSettings
