#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::IsHDRToggleActive {
    IL2CPP_REGISTER_METHOD(0x00646040, bool, Validate, (app::IsHDRToggleActive * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsHDRToggleActive * this_ptr))
} // namespace app::classes::IsHDRToggleActive
