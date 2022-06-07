#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::Demos::CharacterThirdPerson {
    IL2CPP_REGISTER_METHOD(0x02212520, bool, get_onGround, (app::CharacterThirdPerson * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01293D20, void, set_onGround, (app::CharacterThirdPerson * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02212530, void, Start, (app::CharacterThirdPerson * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02212740, void, OnAnimatorMove, (app::CharacterThirdPerson * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02212870, void, Move, (app::CharacterThirdPerson * this_ptr, app::Vector3 delta_position, app::Quaternion delta_rotation))
    IL2CPP_REGISTER_METHOD(0x02212B00, void, FixedUpdate, (app::CharacterThirdPerson * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022134D0, void, Update, (app::CharacterThirdPerson * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02213660, void, LateUpdate, (app::CharacterThirdPerson * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02213830, void, MoveFixed, (app::CharacterThirdPerson * this_ptr, app::Vector3 delta_position))
    IL2CPP_REGISTER_METHOD(0x022146A0, void, WallRun, (app::CharacterThirdPerson * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022157B0, bool, CanWallRun, (app::CharacterThirdPerson * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022158C0, app::Vector3, GetMoveDirection, (app::CharacterThirdPerson * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02215D70, void, Rotate, (app::CharacterThirdPerson * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02216940, app::Vector3, GetForwardDirection, (app::CharacterThirdPerson * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02216DC0, bool, Jump, (app::CharacterThirdPerson * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022170E0, void, GroundCheck, (app::CharacterThirdPerson * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02217940, void, ctor, (app::CharacterThirdPerson * this_ptr))
}
