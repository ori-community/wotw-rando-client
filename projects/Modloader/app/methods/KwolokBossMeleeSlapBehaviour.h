#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KwolokBossMeleeSlapBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/Enum.h>

namespace app::classes::KwolokBossMeleeSlapBehaviour {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionStayAtRangeAllowed, (app::KwolokBossMeleeSlapBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FixedUpdate, (app::KwolokBossMeleeSlapBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E0B60, void, InitializeCancellableController, (app::KwolokBossMeleeSlapBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E7D40, void, OnEnter, (app::KwolokBossMeleeSlapBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012E0C90, app::BehaviourStatus__Enum, OnExecute, (app::KwolokBossMeleeSlapBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012E8090, void, OnExit, (app::KwolokBossMeleeSlapBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012E8240, float, ComputeUtility, (app::KwolokBossMeleeSlapBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00965980, void, InitializeHitReactionController, (app::KwolokBossMeleeSlapBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E83C0, void, ModifyLookAngle, (app::KwolokBossMeleeSlapBehaviour * this_ptr, float* angle))
    IL2CPP_REGISTER_METHODINFO(0x04709F58, KwolokBossMeleeSlapBehaviour_ModifyLookAngle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012E83F0, void, UpdateDetectionRectangle, (app::KwolokBossMeleeSlapBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E8600, app::Enum__Array*, GetEntries, (app::KwolokBossMeleeSlapBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E86A0, app::Enum, Evaluate, (app::KwolokBossMeleeSlapBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::KwolokBossMeleeSlapBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E28D0, void, ctor, (app::KwolokBossMeleeSlapBehaviour * this_ptr))
} // namespace app::classes::KwolokBossMeleeSlapBehaviour
