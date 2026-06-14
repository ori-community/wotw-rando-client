#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_FeatherFlurryState.h>

namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_FeatherFlurryState {
    IL2CPP_REGISTER_METHOD(
        0x0176FFA0,
        void,
        ctor,
        app::PetrifiedOwlBossFinalComboBehaviour_FeatherFlurryState* this_ptr,
        app::PetrifiedOwlBossFinalComboBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x01770030, void, OnEnter, app::PetrifiedOwlBossFinalComboBehaviour_FeatherFlurryState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017702E0, void, UpdateState, app::PetrifiedOwlBossFinalComboBehaviour_FeatherFlurryState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017703B0, void, OnExit, app::PetrifiedOwlBossFinalComboBehaviour_FeatherFlurryState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01770590, void, OnShootEvent, app::PetrifiedOwlBossFinalComboBehaviour_FeatherFlurryState* this_ptr)
} // namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_FeatherFlurryState
