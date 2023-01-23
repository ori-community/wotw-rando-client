#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NavigableOnGUI_Field__Boxed.h>
#include <Modloader/app/structs/NavigableOnGUI.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::UberStateVisualization::NavigableOnGUI_Field {
    IL2CPP_REGISTER_METHOD(0x001C03D0, void, ctor, (app::NavigableOnGUI_Field__Boxed * this_ptr, app::NavigableOnGUI* ui, app::String* label))
    IL2CPP_REGISTER_METHOD(0x001C0400, void, Dispose, (app::NavigableOnGUI_Field__Boxed * this_ptr))
} // namespace app::classes::Moon::UberStateVisualization::NavigableOnGUI_Field
