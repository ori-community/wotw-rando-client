#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_.h>
#include <Modloader/app/structs/VisibleReflectionProbe.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* this_ptr,
        app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A810,
        int32_t,
        Compare,
        app::ComparisonComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* this_ptr,
        app::VisibleReflectionProbe x,
        app::VisibleReflectionProbe y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_
