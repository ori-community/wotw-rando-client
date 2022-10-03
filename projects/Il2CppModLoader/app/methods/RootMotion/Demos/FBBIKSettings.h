#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::Demos::FBBIKSettings {
    IL2CPP_REGISTER_METHOD(0x02219740, void, UpdateSettings, (app::FBBIKSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02219990, void, Start, (app::FBBIKSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02219A90, void, Update, (app::FBBIKSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02219AA0, void, ctor, (app::FBBIKSettings * this_ptr))
} // namespace app::classes::RootMotion::Demos::FBBIKSettings
