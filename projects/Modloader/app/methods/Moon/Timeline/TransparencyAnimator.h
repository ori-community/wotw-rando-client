#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::TransparencyAnimator {
    IL2CPP_REGISTER_METHOD(0x00D0BB50, app::GameObject*, get_ExternalTarget, (app::TransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::List_1_UnityEngine_Transform_*, get_EarlyZTransforms, (app::TransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0BBE0, void, OnStartPlayback, (app::TransparencyAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D0BC20, void, OnPoolSpawned, (app::TransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0BC30, void, OnPoolPrewarm, (app::TransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0BC40, void, Init, (app::TransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (app::TransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::TransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0C1F0, void, OnUpdateEntity, (app::TransparencyAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00D0C310, int32_t, get_RenderersCount, (app::TransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0C3A0, void, SetTime, (app::TransparencyAnimator * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00D0C7B0, void, UpdateEarlyZMesh, (app::TransparencyAnimator * this_ptr, float alpha))
    IL2CPP_REGISTER_METHOD(0x00D0C920, void, GetManagedEarlyZDynamicGraphicTargets, (app::TransparencyAnimator * this_ptr, app::List_1_UnityEngine_GameObject_* targets))
    IL2CPP_REGISTER_METHOD(0x00D0CB30, void, OnEarlyZBuilt, (app::TransparencyAnimator * this_ptr, app::Transform* early_z_transform, app::GameObject* target))
    IL2CPP_REGISTER_METHOD(0x00D0CBD0, bool, get_ShouldUpdateWhileDisabled, (app::TransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0CCE0, void, SynchronizePad, (app::TransparencyAnimator * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record, app::TimelineEntity* entity, app::Constraint__Enum type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::TransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0CF00, void, ctor, (app::TransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0D180, void, cctor, ())
} // namespace app::classes::Moon::Timeline::TransparencyAnimator
