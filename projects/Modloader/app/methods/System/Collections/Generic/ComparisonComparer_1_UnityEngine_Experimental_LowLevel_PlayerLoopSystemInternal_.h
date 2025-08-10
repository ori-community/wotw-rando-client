#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_.h>
#include <Modloader/app/structs/PlayerLoopSystemInternal.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_* this_ptr,
        app::Comparison_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A270,
        int32_t,
        Compare,
        app::ComparisonComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_* this_ptr,
        app::PlayerLoopSystemInternal x,
        app::PlayerLoopSystemInternal y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_
