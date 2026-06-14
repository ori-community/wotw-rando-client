#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_ExternalForceEntry_.h>
#include <Modloader/app/structs/Comparison_1_ExternalForceEntry_.h>
#include <Modloader/app/structs/ExternalForceEntry.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_ExternalForceEntry_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, app::ComparisonComparer_1_ExternalForceEntry_* this_ptr, app::Comparison_1_ExternalForceEntry_* comparison)
    IL2CPP_REGISTER_METHOD(
        0x0162A270,
        int32_t,
        Compare,
        app::ComparisonComparer_1_ExternalForceEntry_* this_ptr,
        app::ExternalForceEntry x,
        app::ExternalForceEntry y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_ExternalForceEntry_
