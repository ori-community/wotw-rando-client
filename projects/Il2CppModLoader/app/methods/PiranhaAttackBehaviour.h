#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PiranhaAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x0115C5B0, void, OnEntityInitialized, (app::PiranhaAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0115C660, void, OnEnter, (app::PiranhaAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0115CA60, app::BehaviourStatus__Enum, OnExecute, (app::PiranhaAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0115CF60, void, ChangeState, (app::PiranhaAttackBehaviour * this_ptr, app::PiranhaAttackBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x0115D220, void, OnExit, (app::PiranhaAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0115D280, void, PlayTimeline, (app::PiranhaAttackBehaviour * this_ptr, app::MoonTimeline* timeline, app::Action* on_stop))
    IL2CPP_REGISTER_METHOD(0x0115D2F0, void, ResetCurrentTimeline, (app::PiranhaAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0115D3E0, void, ctor, (app::PiranhaAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0115D490, void, _OnEnter_b__17_0, (app::PiranhaAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04706450, PiranhaAttackBehaviour__OnEnter_b__17_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0115D4B0, void, _OnEnter_b__17_1, (app::PiranhaAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047103D8, PiranhaAttackBehaviour__OnEnter_b__17_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0115D4D0, void, _ChangeState_b__19_0, (app::PiranhaAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047948B0, PiranhaAttackBehaviour__ChangeState_b__19_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00754B80, void, _ChangeState_b__19_1, (app::PiranhaAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742540, PiranhaAttackBehaviour__ChangeState_b__19_1__MethodInfo)
} // namespace app::classes::PiranhaAttackBehaviour
