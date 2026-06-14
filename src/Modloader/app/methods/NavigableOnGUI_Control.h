#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NavigableOnGUI_1.h>
#include <Modloader/app/structs/NavigableOnGUI_Control_1__Boxed.h>

namespace app::classes::NavigableOnGUI_Control {
    IL2CPP_REGISTER_METHOD(0x0011A9F0, void, ctor, app::NavigableOnGUI_Control_1__Boxed* this_ptr, app::NavigableOnGUI_1* ui)
    IL2CPP_REGISTER_METHOD(0x0011AA20, void, Dispose, app::NavigableOnGUI_Control_1__Boxed* this_ptr)
} // namespace app::classes::NavigableOnGUI_Control
