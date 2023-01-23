#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XInputGamepad__Class.h>
#include <Modloader/app/structs/XInputGamepad.h>
#include <Modloader/app/structs/XInputGamepad__Boxed.h>

namespace app::classes::types {
    namespace XInputGamepad {
        inline app::XInputGamepad__Class** type_info = (app::XInputGamepad__Class**)(modloader::win::memory::resolve_rva(0x04750400));
        inline app::XInputGamepad__Class* get_class() {
            return il2cpp::get_class<app::XInputGamepad__Class>(type_info, "J2i.Net.XInputWrapper", "XInputGamepad");
        }
        inline app::XInputGamepad* create() {
            return il2cpp::create_object<app::XInputGamepad>(get_class());
        }
        inline app::XInputGamepad__Boxed* box(app::XInputGamepad value) {
            return il2cpp::box_value<app::XInputGamepad__Boxed>(get_class(), value);
        }
    } // namespace XInputGamepad
} // namespace app::classes::types
