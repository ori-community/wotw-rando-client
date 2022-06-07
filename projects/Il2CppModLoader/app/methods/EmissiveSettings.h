#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EmissiveSettings {
    IL2CPP_REGISTER_METHOD(0x00BFBB50, app::EmissiveSettings *, Clone, (app::EmissiveSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFBCA0, void, CopyFrom, (app::EmissiveSettings * this_ptr, app::EmissiveSettings * settings_emissive_settings))
    IL2CPP_REGISTER_METHOD(0x00BFBD20, void, ctor, (app::EmissiveSettings * this_ptr))
}
