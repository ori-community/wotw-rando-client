#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::InstantiateAnimator {
    IL2CPP_REGISTER_METHOD(0x0076FFC0, app::Transform *, get_EffectiveLocation, (app::InstantiateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DynamicPrefabProviderEmpty, (app::InstantiateAnimator * this_ptr, app::List_1_DynamicInstantiationDescriptor_ * descriptors))
    IL2CPP_REGISTER_METHOD(0x00770090, void, DynamicPrefabProvider, (app::InstantiateAnimator * this_ptr, app::List_1_DynamicInstantiationDescriptor_ * descriptors))
    IL2CPP_REGISTER_METHOD(0x007705D0, void, OnStartPlayback, (app::InstantiateAnimator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x007705E0, app::GameObject *, InstantiatePrefab, (app::InstantiateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00770A10, void, MakeInstanceFollowTarget, (app::InstantiateAnimator * this_ptr, app::GameObject * instance, app::Transform * target))
    IL2CPP_REGISTER_METHOD(0x00770B50, void, ClearFollowTarget, (app::InstantiateAnimator * this_ptr, app::GameObject * instance))
    IL2CPP_REGISTER_METHOD(0x00770C30, void, ComputePositionAndRotation, (app::InstantiateAnimator * this_ptr, app::Vector3 * pos, app::Quaternion * rot))
    IL2CPP_REGISTER_METHOD(0x00771330, void, AdjustPositionAndRotation, (app::InstantiateAnimator * this_ptr, app::GameObject * instance))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::InstantiateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00771500, float, GetDuration, (app::InstantiateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007717D0, void, ctor, (app::InstantiateAnimator * this_ptr))
}
