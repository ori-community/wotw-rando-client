#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_FloatStateMap_Mapping_.h>
#include <Modloader/app/structs/Comparison_1_FloatStateMap_Mapping_.h>
#include <Modloader/app/structs/FloatStateMap_Mapping.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_FloatStateMap_Mapping_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_FloatStateMap_Mapping_* this_ptr,
        app::Comparison_1_FloatStateMap_Mapping_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A2F0,
        int32_t,
        Compare,
        app::ComparisonComparer_1_FloatStateMap_Mapping_* this_ptr,
        app::FloatStateMap_Mapping x,
        app::FloatStateMap_Mapping y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_FloatStateMap_Mapping_
