#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_MeshTrail_MeshTrailEmitter_.h>
#include <Modloader/app/structs/Comparison_1_MeshTrail_MeshTrailEmitter_.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailEmitter.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_MeshTrail_MeshTrailEmitter_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_MeshTrail_MeshTrailEmitter_* this_ptr,
        app::Comparison_1_MeshTrail_MeshTrailEmitter_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A350,
        int32_t,
        Compare,
        app::ComparisonComparer_1_MeshTrail_MeshTrailEmitter_* this_ptr,
        app::MeshTrail_MeshTrailEmitter x,
        app::MeshTrail_MeshTrailEmitter y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_MeshTrail_MeshTrailEmitter_
