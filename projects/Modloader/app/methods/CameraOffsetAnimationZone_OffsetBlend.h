#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraOffsetAnimationZone_OffsetBlend.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CameraOffsetAnimationZone_OffsetBlend {
    IL2CPP_REGISTER_METHOD(0x01696CF0, void, ctor, app::CameraOffsetAnimationZone_OffsetBlend* this_ptr, app::Vector3 offset, app::Vector3 rotation, float time)
}
