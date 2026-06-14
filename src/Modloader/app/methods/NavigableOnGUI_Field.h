#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NavigableOnGUI_1.h>
#include <Modloader/app/structs/NavigableOnGUI_Field_1__Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::NavigableOnGUI_Field {
    IL2CPP_REGISTER_METHOD(0x0011AA60, void, ctor, app::NavigableOnGUI_Field_1__Boxed* this_ptr, app::NavigableOnGUI_1* ui, app::String* label)
    IL2CPP_REGISTER_METHOD(0x0011AA90, void, Dispose, app::NavigableOnGUI_Field_1__Boxed* this_ptr)
} // namespace app::classes::NavigableOnGUI_Field
