#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkTransform {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkTransform * this_ptr, void * c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026FDD00, void *, getCPtr, (app::AkTransform * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkTransform * this_ptr, void * c_ptr))
    IL2CPP_REGISTER_METHOD(0x026FDD90, void, Finalize, (app::AkTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FDE10, void, Dispose, (app::AkTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FE020, app::AkVector *, Position, (app::AkTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FE220, app::AkVector *, OrientationFront, (app::AkTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FE420, app::AkVector *, OrientationTop, (app::AkTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FE620, void, Set_1, (app::AkTransform * this_ptr, app::AkVector * in_position, app::AkVector * in_orientation_front, app::AkVector * in_orientation_top))
    IL2CPP_REGISTER_METHOD(0x026FE7A0, void, Set_2, (app::AkTransform * this_ptr, float in_position_x, float in_position_y, float in_position_z, float in_orient_front_x, float in_orient_front_y, float in_orient_front_z, float in_orient_top_x, float in_orient_top_y, float in_orient_top_z))
    IL2CPP_REGISTER_METHOD(0x026FE900, void, SetPosition_1, (app::AkTransform * this_ptr, app::AkVector * in_position))
    IL2CPP_REGISTER_METHOD(0x026FEA40, void, SetPosition_2, (app::AkTransform * this_ptr, float in_x, float in_y, float in_z))
    IL2CPP_REGISTER_METHOD(0x026FEBA0, void, SetOrientation_1, (app::AkTransform * this_ptr, app::AkVector * in_orientation_front, app::AkVector * in_orientation_top))
    IL2CPP_REGISTER_METHOD(0x026FED00, void, SetOrientation_2, (app::AkTransform * this_ptr, float in_orient_front_x, float in_orient_front_y, float in_orient_front_z, float in_orient_top_x, float in_orient_top_y, float in_orient_top_z))
    IL2CPP_REGISTER_METHOD(0x026FEE60, void, ctor_2, (app::AkTransform * this_ptr))
}
