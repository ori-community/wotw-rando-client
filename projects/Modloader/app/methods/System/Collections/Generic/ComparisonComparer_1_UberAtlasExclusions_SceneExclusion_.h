#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_UberAtlasExclusions_SceneExclusion_.h>
#include <Modloader/app/structs/Comparison_1_UberAtlasExclusions_SceneExclusion_.h>
#include <Modloader/app/structs/UberAtlasExclusions_SceneExclusion.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UberAtlasExclusions_SceneExclusion_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_UberAtlasExclusions_SceneExclusion_* this_ptr,
        app::Comparison_1_UberAtlasExclusions_SceneExclusion_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare,
        app::ComparisonComparer_1_UberAtlasExclusions_SceneExclusion_* this_ptr,
        app::UberAtlasExclusions_SceneExclusion x,
        app::UberAtlasExclusions_SceneExclusion y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UberAtlasExclusions_SceneExclusion_
