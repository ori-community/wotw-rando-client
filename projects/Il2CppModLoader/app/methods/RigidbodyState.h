#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RigidbodyState {
    IL2CPP_REGISTER_METHOD(0x013527F0, bool, GetGoThroughComponent, (app::RigidbodyState * this_ptr, app::GoThroughPlatform** comp))
    IL2CPP_REGISTER_METHOD(0x013529A0, app::Object*, Clone, (app::RigidbodyState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01352C70, void, SaveBodyState, (app::RigidbodyState * this_ptr, app::Rigidbody* rigidbody, bool use_local_coordinates, bool reset_x_y_rotations, bool reset_z))
    IL2CPP_REGISTER_METHOD(0x01353320, void, ApplyInertia, (app::RigidbodyState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01353460, void, ApplyPosition, (app::RigidbodyState * this_ptr, app::Vector3 root_shift, bool use_local_coordinates, bool reset_x_y_rotations, bool reset_z))
    IL2CPP_REGISTER_METHOD(0x013539E0, void, ApplyBodyConstraints, (app::RigidbodyState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01353B50, void, ApplyStateLegacy, (app::RigidbodyState * this_ptr, app::Vector3 root_shift, bool use_local_coordinates, bool reset_x_y_rotations, bool reset_z, bool apply_kinematic, bool apply_gravity))
    IL2CPP_REGISTER_METHOD(0x01353ED0, void, ApplyState, (app::RigidbodyState * this_ptr, app::Vector3 root_shift, bool use_local_coordinates, bool reset_x_y_rotations, bool reset_z, bool apply_active, bool apply_kinematic, bool apply_gravity))
    IL2CPP_REGISTER_METHOD(0x013543A0, void, ApplyDynamicSettings, (app::RigidbodyState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01354720, void, ctor, (app::RigidbodyState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01354870, void, cctor, ())
} // namespace app::classes::RigidbodyState
