#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_DebugMenu_ExternalItem_.h>
#include <Modloader/app/structs/Comparison_1_DebugMenu_ExternalItem_.h>
#include <Modloader/app/structs/DebugMenu_ExternalItem.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_DebugMenu_ExternalItem_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_DebugMenu_ExternalItem_* this_ptr,
        app::Comparison_1_DebugMenu_ExternalItem_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare,
        app::ComparisonComparer_1_DebugMenu_ExternalItem_* this_ptr,
        app::DebugMenu_ExternalItem x,
        app::DebugMenu_ExternalItem y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_DebugMenu_ExternalItem_
