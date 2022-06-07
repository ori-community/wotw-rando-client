#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Stomper {
    IL2CPP_REGISTER_METHOD(0x00656A30, void, Awake, (app::Stomper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00656AD0, void, OnDestroy, (app::Stomper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00656B70, void, CalculateDistance, (app::Stomper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00657260, void, Start, (app::Stomper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00657AB0, void, FixedUpdate, (app::Stomper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00658170, void, UpdatePosition, (app::Stomper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006584A0, void, ChangeState, (app::Stomper * this_ptr, app::Stomper_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00658660, void, PlayerTouchedTrigger, (app::Stomper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006587A0, void, MoveBody, (app::Stomper * this_ptr, app::Rigidbody * rigidbody, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00658AB0, bool, get_IsSuspended, (app::Stomper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00658AC0, void, set_IsSuspended, (app::Stomper * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FFA60, app::SuspendableMask__Enum, get_Mask, (app::Stomper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00658AD0, void, set_Mask, (app::Stomper * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00658B90, void, ctor, (app::Stomper * this_ptr))
}
