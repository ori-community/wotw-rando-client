#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_.h>
#include <Modloader/app/structs/Comparison_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_.h>
#include <Modloader/app/structs/DynamicDataResolver_SerializedDynamicDataLinkItem.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_* this_ptr,
        app::Comparison_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A3E0,
        int32_t,
        Compare,
        app::ComparisonComparer_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_* this_ptr,
        app::DynamicDataResolver_SerializedDynamicDataLinkItem x,
        app::DynamicDataResolver_SerializedDynamicDataLinkItem y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_
