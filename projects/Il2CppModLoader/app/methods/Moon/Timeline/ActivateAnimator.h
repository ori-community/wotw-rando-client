#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::ActivateAnimator {
    IL2CPP_REGISTER_METHOD(0x01BAF670, app::GameObject*, get_ExternalTarget, (app::ActivateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::ActivateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAF700, void, OnStartPlayback, (app::ActivateAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::ActivateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAF7B0, void, OnUpdateEntity, (app::ActivateAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::MoonReference_1_UnityEngine_GameObject_*, GetGameObjectTarget, (app::ActivateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAF910, bool, get_ShouldUpdateWhileDisabled, (app::ActivateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAFA10, void, SynchronizePad, (app::ActivateAnimator * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record, app::TimelineEntity* entity, app::Constraint__Enum type))
    IL2CPP_REGISTER_METHOD(0x01BAFAF0, void, GetManagedEarlyZDynamicGraphicTargets, (app::ActivateAnimator * this_ptr, app::List_1_UnityEngine_GameObject_* targets))
    IL2CPP_REGISTER_METHOD(0x01BAFBF0, void, ctor, (app::ActivateAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::ActivateAnimator
