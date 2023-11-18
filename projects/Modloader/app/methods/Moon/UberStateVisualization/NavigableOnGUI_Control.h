#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NavigableOnGUI_Control__Boxed.h>
#include <Modloader/app/structs/NavigableOnGUI.h>

namespace app::classes::Moon::UberStateVisualization::NavigableOnGUI_Control {
    IL2CPP_REGISTER_METHOD(0x001C0380, void, ctor, (app::NavigableOnGUI_Control__Boxed * this_ptr, app::NavigableOnGUI* ui))
    IL2CPP_REGISTER_METHOD(0x001C03B0, void, Dispose, (app::NavigableOnGUI_Control__Boxed * this_ptr))
} // namespace app::classes::Moon::UberStateVisualization::NavigableOnGUI_Control
