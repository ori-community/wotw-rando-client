#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::JointDrive {
    IL2CPP_REGISTER_METHOD(0x00002890, void, set_mode, (app::JointDrive__Boxed * this_ptr, app::JointDriveMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x001EB400, float, get_positionSpring, (app::JointDrive__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00114F30, void, set_positionSpring, (app::JointDrive__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x001EB410, float, get_positionDamper, (app::JointDrive__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001155C0, void, set_positionDamper, (app::JointDrive__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x001D9B90, float, get_maximumForce, (app::JointDrive__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00115B30, void, set_maximumForce, (app::JointDrive__Boxed * this_ptr, float value))
} // namespace app::classes::UnityEngine::JointDrive
