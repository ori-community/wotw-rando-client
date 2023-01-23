#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AnimationMeshingSettings.h>

namespace app::classes::AnimationMeshingSettings {
    IL2CPP_REGISTER_METHOD(0x004FC900, app::AnimationMeshingSettings*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x004FCA40, void, ctor, (app::AnimationMeshingSettings * this_ptr))
} // namespace app::classes::AnimationMeshingSettings
