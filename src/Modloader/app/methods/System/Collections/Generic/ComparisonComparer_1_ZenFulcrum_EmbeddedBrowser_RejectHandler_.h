#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_.h>
#include <Modloader/app/structs/Comparison_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_.h>
#include <Modloader/app/structs/RejectHandler.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_* this_ptr,
        app::Comparison_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare,
        app::ComparisonComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_* this_ptr,
        app::RejectHandler x,
        app::RejectHandler y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_
