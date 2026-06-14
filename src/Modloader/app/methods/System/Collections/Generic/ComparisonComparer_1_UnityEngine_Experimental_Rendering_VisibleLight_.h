#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Experimental_Rendering_VisibleLight_.h>
#include <Modloader/app/structs/VisibleLight.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_* this_ptr,
        app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleLight_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A730,
        int32_t,
        Compare,
        app::ComparisonComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_* this_ptr,
        app::VisibleLight x,
        app::VisibleLight y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_
