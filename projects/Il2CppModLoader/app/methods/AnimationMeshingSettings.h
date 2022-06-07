#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AnimationMeshingSettings {
    IL2CPP_REGISTER_METHOD(0x004FC900, app::AnimationMeshingSettings *, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x004FCA40, void, ctor, (app::AnimationMeshingSettings * this_ptr))
}
