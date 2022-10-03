#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RecorderAsset {
    IL2CPP_REGISTER_METHOD(0x002FB940, void, SetData, (app::RecorderAsset * this_ptr, app::RecorderData* data))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::RecorderAsset * this_ptr))
} // namespace app::classes::RecorderAsset
