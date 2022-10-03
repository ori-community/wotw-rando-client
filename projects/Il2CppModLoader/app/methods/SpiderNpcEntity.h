#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpiderNpcEntity {
    IL2CPP_REGISTER_METHOD(0x011BE8A0, app::String*, get_DialogActorName, (app::SpiderNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BE920, app::String*, get_InteractionActorName, (app::SpiderNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CameraTargetActive, (app::SpiderNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BE9A0, app::SpiderNpcEntity_State__Enum, get_CurrentState, (app::SpiderNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BE9D0, void, set_CurrentState, (app::SpiderNpcEntity * this_ptr, app::SpiderNpcEntity_State__Enum value))
    IL2CPP_REGISTER_METHOD(0x011BEA00, void, OnEnable, (app::SpiderNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BEAC0, void, OnDisable, (app::SpiderNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BEB70, void, PlayLookAnimation, (app::SpiderNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BED60, void, PlayTalkAnimation, (app::SpiderNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BEF50, void, OnUpdate, (app::SpiderNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BF340, void, StartIdle, (app::SpiderNpcEntity * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::SpiderNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BF5F0, void, Apply, (app::SpiderNpcEntity * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00C0D850, app::IUberState__Array*, get_AffectingUberStates, (app::SpiderNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BF640, void, set_AffectingUberStates, (app::SpiderNpcEntity * this_ptr, app::IUberState__Array* value))
    IL2CPP_REGISTER_METHOD(0x011BF650, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::SpiderNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BF660, void, set_AllTargets, (app::SpiderNpcEntity * this_ptr, app::List_1_UnityEngine_GameObject_* value))
    IL2CPP_REGISTER_METHOD(0x004173E0, void, ctor, (app::SpiderNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BF670, bool, _PlayLookAnimation_b__24_0, (app::SpiderNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472CA50, SpiderNpcEntity__PlayLookAnimation_b__24_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011BF680, bool, _PlayTalkAnimation_b__25_0, (app::SpiderNpcEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04723D20, SpiderNpcEntity__PlayTalkAnimation_b__25_0__MethodInfo)
} // namespace app::classes::SpiderNpcEntity
