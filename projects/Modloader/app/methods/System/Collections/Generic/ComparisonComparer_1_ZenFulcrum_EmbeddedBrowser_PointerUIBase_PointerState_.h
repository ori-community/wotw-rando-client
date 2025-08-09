#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_.h>
#include <Modloader/app/structs/Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_.h>
#include <Modloader/app/structs/PointerUIBase_PointerState.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_* this_ptr,
        app::Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A350,
        int32_t,
        Compare,
        app::ComparisonComparer_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_* this_ptr,
        app::PointerUIBase_PointerState x,
        app::PointerUIBase_PointerState y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_
