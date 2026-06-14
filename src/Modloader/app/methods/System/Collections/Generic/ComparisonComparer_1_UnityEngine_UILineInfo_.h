#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_UnityEngine_UILineInfo_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_UILineInfo_.h>
#include <Modloader/app/structs/UILineInfo.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_UILineInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_UnityEngine_UILineInfo_* this_ptr,
        app::Comparison_1_UnityEngine_UILineInfo_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x0162A050, int32_t, Compare, app::ComparisonComparer_1_UnityEngine_UILineInfo_* this_ptr, app::UILineInfo x, app::UILineInfo y)
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_UILineInfo_
