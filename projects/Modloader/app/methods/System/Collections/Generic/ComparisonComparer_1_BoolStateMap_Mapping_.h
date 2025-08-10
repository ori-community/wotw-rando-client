#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BoolStateMap_Mapping.h>
#include <Modloader/app/structs/ComparisonComparer_1_BoolStateMap_Mapping_.h>
#include <Modloader/app/structs/Comparison_1_BoolStateMap_Mapping_.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_BoolStateMap_Mapping_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_BoolStateMap_Mapping_* this_ptr,
        app::Comparison_1_BoolStateMap_Mapping_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A4F0,
        int32_t,
        Compare,
        app::ComparisonComparer_1_BoolStateMap_Mapping_* this_ptr,
        app::BoolStateMap_Mapping x,
        app::BoolStateMap_Mapping y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_BoolStateMap_Mapping_
