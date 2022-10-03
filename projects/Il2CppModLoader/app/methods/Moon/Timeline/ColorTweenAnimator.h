#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::ColorTweenAnimator {
    IL2CPP_REGISTER_METHOD(0x007620B0, app::GameObject*, get_ExternalTarget, (app::ColorTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::ColorTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF8B0, app::UberShaderProperty_Color__Enum, get_ColorUberShaderProperty, (app::ColorTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::ColorTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00762140, app::Color, get_CurrentColor, (app::ColorTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00762210, app::Renderer*, get_EffectiveRenderer, (app::ColorTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00762330, void, OnStartPlayback, (app::ColorTweenAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00762340, void, SetupInitialValues, (app::ColorTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04727630, ColorTweenAnimator_SetupInitialValues__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x007624D0, void, OnUpdateEntity, (app::ColorTweenAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00762910, bool, HasFinished, (app::ColorTweenAnimator * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::MoonReference_1_UnityEngine_GameObject_*, GetGameObjectTarget, (app::ColorTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00762920, void, SynchronizeData, (app::ColorTweenAnimator * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x00762C20, void, SynchronizePad, (app::ColorTweenAnimator * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record, app::TimelineEntity* entity, app::Constraint__Enum type))
    IL2CPP_REGISTER_METHOD(0x00762D10, void, ctor, (app::ColorTweenAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::ColorTweenAnimator
