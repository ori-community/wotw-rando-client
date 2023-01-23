#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KwolokBossHeadbuttBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>

namespace app::classes::KwolokBossHeadbuttBehaviour {
    IL2CPP_REGISTER_METHOD(0x012E09B0, void, Start, (app::KwolokBossHeadbuttBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionFollowAllowed, (app::KwolokBossHeadbuttBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionStayAtRangeAllowed, (app::KwolokBossHeadbuttBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E0B60, void, InitializeCancellableController, (app::KwolokBossHeadbuttBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E0BB0, void, OnEnter, (app::KwolokBossHeadbuttBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012E0C90, app::BehaviourStatus__Enum, OnExecute, (app::KwolokBossHeadbuttBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012E0D00, void, OnExit, (app::KwolokBossHeadbuttBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012E0D60, float, ComputeUtility, (app::KwolokBossHeadbuttBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00965980, void, InitializeHitReactionController, (app::KwolokBossHeadbuttBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E0D80, void, OnFallingRockTriggerStart, (app::KwolokBossHeadbuttBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04770928, KwolokBossHeadbuttBehaviour_OnFallingRockTriggerStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012E0E80, void, ctor, (app::KwolokBossHeadbuttBehaviour * this_ptr))
} // namespace app::classes::KwolokBossHeadbuttBehaviour
