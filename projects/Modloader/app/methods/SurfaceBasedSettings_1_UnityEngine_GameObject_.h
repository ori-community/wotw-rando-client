#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SurfaceBasedSettings_1_UnityEngine_GameObject_.h>

namespace app::classes::SurfaceBasedSettings_1_UnityEngine_GameObject_ {
    IL2CPP_REGISTER_METHOD(0x01D1CC50, app::GameObject*, GetValue, app::SurfaceBasedSettings_1_UnityEngine_GameObject_* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x01D1D120, void, ctor, app::SurfaceBasedSettings_1_UnityEngine_GameObject_* this_ptr)
} // namespace app::classes::SurfaceBasedSettings_1_UnityEngine_GameObject_
