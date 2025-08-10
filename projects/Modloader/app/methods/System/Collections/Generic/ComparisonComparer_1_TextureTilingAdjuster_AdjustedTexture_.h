#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_TextureTilingAdjuster_AdjustedTexture_.h>
#include <Modloader/app/structs/Comparison_1_TextureTilingAdjuster_AdjustedTexture_.h>
#include <Modloader/app/structs/TextureTilingAdjuster_AdjustedTexture.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_TextureTilingAdjuster_AdjustedTexture_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_TextureTilingAdjuster_AdjustedTexture_* this_ptr,
        app::Comparison_1_TextureTilingAdjuster_AdjustedTexture_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A2F0,
        int32_t,
        Compare,
        app::ComparisonComparer_1_TextureTilingAdjuster_AdjustedTexture_* this_ptr,
        app::TextureTilingAdjuster_AdjustedTexture x,
        app::TextureTilingAdjuster_AdjustedTexture y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_TextureTilingAdjuster_AdjustedTexture_
