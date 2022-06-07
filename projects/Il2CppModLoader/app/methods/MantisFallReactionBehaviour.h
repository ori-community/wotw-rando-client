#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MantisFallReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::LegacyTimelineSequence *, get_EffectiveLandSequence, (app::MantisFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::MoonTimeline *, get_EffectiveLandSequenceNew, (app::MantisFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F96B0, void, OnInitializeTask, (app::MantisFallReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x009F97C0, void, OnEnterTask, (app::MantisFallReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x009F9A60, app::BehaviourStatus__Enum, OnExecuteTask, (app::MantisFallReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x009F9E20, void, OnExitTask, (app::MantisFallReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x009FA0E0, void, HandleCollision, (app::MantisFallReactionBehaviour * this_ptr, app::MoonControllerColliderHit hit))
    IL2CPP_REGISTER_METHODINFO(0x04771158, MantisFallReactionBehaviour_HandleCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009FA3B0, void, UpdateState, (app::MantisFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009FA400, void, ChangeState, (app::MantisFallReactionBehaviour * this_ptr, app::MantisFallReactionBehaviour_FallState__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x009FA4B0, void, OnEnterFalling, (app::MantisFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009FA920, void, FallingUpdate, (app::MantisFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009FB140, void, OnEnterLand, (app::MantisFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LandUpdate, (app::MantisFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009FB700, void, OnEndLand, (app::MantisFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477A118, MantisFallReactionBehaviour_OnEndLand__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009FBAB0, void, OnEnterCollision, (app::MantisFallReactionBehaviour * this_ptr, app::MoonControllerColliderHit hit))
    IL2CPP_REGISTER_METHOD(0x009FBE00, void, CollisionUpdate, (app::MantisFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009FC0E0, void, ctor, (app::MantisFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009FC140, bool, _OnEnterFalling_b__49_0, (app::MantisFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04738640, MantisFallReactionBehaviour__OnEnterFalling_b__49_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009FC140, bool, _FallingUpdate_b__50_0, (app::MantisFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473BF48, MantisFallReactionBehaviour__FallingUpdate_b__50_0__MethodInfo)
}
