#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_GeneralDebugMenuPage_SceneInfo_.h>
#include <Modloader/app/structs/Comparison_1_GeneralDebugMenuPage_SceneInfo_.h>
#include <Modloader/app/structs/GeneralDebugMenuPage_SceneInfo.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_GeneralDebugMenuPage_SceneInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_GeneralDebugMenuPage_SceneInfo_* this_ptr,
        app::Comparison_1_GeneralDebugMenuPage_SceneInfo_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare,
        app::ComparisonComparer_1_GeneralDebugMenuPage_SceneInfo_* this_ptr,
        app::GeneralDebugMenuPage_SceneInfo x,
        app::GeneralDebugMenuPage_SceneInfo y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_GeneralDebugMenuPage_SceneInfo_
