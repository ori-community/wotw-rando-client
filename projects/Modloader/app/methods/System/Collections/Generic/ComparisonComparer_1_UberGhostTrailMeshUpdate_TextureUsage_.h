#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_UberGhostTrailMeshUpdate_TextureUsage_.h>
#include <Modloader/app/structs/Comparison_1_UberGhostTrailMeshUpdate_TextureUsage_.h>
#include <Modloader/app/structs/UberGhostTrailMeshUpdate_TextureUsage.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UberGhostTrailMeshUpdate_TextureUsage_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_UberGhostTrailMeshUpdate_TextureUsage_* this_ptr,
        app::Comparison_1_UberGhostTrailMeshUpdate_TextureUsage_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare,
        app::ComparisonComparer_1_UberGhostTrailMeshUpdate_TextureUsage_* this_ptr,
        app::UberGhostTrailMeshUpdate_TextureUsage x,
        app::UberGhostTrailMeshUpdate_TextureUsage y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UberGhostTrailMeshUpdate_TextureUsage_
