#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/KwolokBossBaseBehaviour.h>
#include <Modloader/app/structs/KwolokBossLocomotion.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::KwolokBossBaseBehaviour {
    IL2CPP_REGISTER_METHOD(0x01246D80, app::KwolokBossLocomotion*, get_Locomotion, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01246E60, void, OnEnter, app::KwolokBossBaseBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01246FA0, app::BehaviourStatus__Enum, OnExecute, app::KwolokBossBaseBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01246FF0, void, OnExit, app::KwolokBossBaseBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B6ECA0, void, InitializeCancellableController, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6ECD0, bool, CanCancel, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00968A10, void, InitializeHitReactionController, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00968A40, bool, CanAccumulateHits, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00968A70, bool, CanHitReact, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6ED00, float, get_BehaviourUtility, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01247160, float, ComputeUtility, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsLocomotionFollowAllowed, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsLocomotionStayAtRangeAllowed, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyPostAttackCooldown, app::KwolokBossBaseBehaviour* this_ptr, bool* cooldown)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyMaxLookAtWeights, app::KwolokBossBaseBehaviour* this_ptr, app::Vector2* weights)
    IL2CPP_REGISTER_METHOD(0x01247310, void, ctor, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_1, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_2, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_3, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_4, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_5, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_6, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_7, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_8, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_9, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_10, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_11, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_12, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_13, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_14, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_15, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_16, app::KwolokBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_17, app::KwolokBossBaseBehaviour* this_ptr)
} // namespace app::classes::KwolokBossBaseBehaviour
