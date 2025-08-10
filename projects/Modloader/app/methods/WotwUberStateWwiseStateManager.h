#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/List_1_System_UInt32_.h>
#include <Modloader/app/structs/WotwUberStateWwiseStateManager.h>

namespace app::classes::WotwUberStateWwiseStateManager {
    IL2CPP_REGISTER_METHOD(0x00590130, void, CopyDataFromMap, app::WotwUberStateWwiseStateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005904C0, void, GenerateResetState, app::WotwUberStateWwiseStateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005907F0, void, ResetWwiseStates, app::WotwUberStateWwiseStateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00590CD0, void, PopulateAffectedStates, app::WotwUberStateWwiseStateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x005918A0,
        void,
        UpdateAbilitiesCallback,
        app::WotwUberStateWwiseStateManager* this_ptr,
        app::AbilityType__Enum type,
        bool has_ability
    )
    IL2CPP_REGISTER_METHOD(
        0x00591BB0,
        void,
        UpdateWwiseStates,
        app::WotwUberStateWwiseStateManager* this_ptr,
        app::List_1_System_UInt32_* states_set_this_update
    )
    IL2CPP_REGISTER_METHOD(0x00591F10, void, OnDestroy, app::WotwUberStateWwiseStateManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00592160, void, ctor, app::WotwUberStateWwiseStateManager* this_ptr)
} // namespace app::classes::WotwUberStateWwiseStateManager
