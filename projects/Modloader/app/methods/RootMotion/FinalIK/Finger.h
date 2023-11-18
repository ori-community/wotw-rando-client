#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Finger.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::FinalIK::Finger {
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_initiated, (app::Finger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005150D0, void, set_initiated, (app::Finger * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x020615B0, app::Vector3, get_IKPosition, (app::Finger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020615E0, void, set_IKPosition, (app::Finger * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x02061610, app::Quaternion, get_IKRotation, (app::Finger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02061640, void, set_IKRotation, (app::Finger * this_ptr, app::Quaternion value))
    IL2CPP_REGISTER_METHOD(0x02061660, bool, IsValid, (app::Finger * this_ptr, app::String** error_message))
    IL2CPP_REGISTER_METHOD(0x020617A0, void, Initiate, (app::Finger * this_ptr, app::Transform* hand, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02061E50, void, FixTransforms, (app::Finger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02062000, void, Update, (app::Finger * this_ptr, float master_weight))
    IL2CPP_REGISTER_METHOD(0x004FBE40, void, ctor, (app::Finger * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::Finger
