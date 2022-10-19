#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XInputState {
        inline app::XInputState__Class** type_info = (app::XInputState__Class**)(modloader::win::memory::resolve_rva(0x04756EB0));
        inline app::XInputState__Class* get_class() {
            return il2cpp::get_class<app::XInputState__Class>(type_info, "J2i.Net.XInputWrapper", "XInputState");
        }
        inline app::XInputState* create() {
            return il2cpp::create_object<app::XInputState>(get_class());
        }
        inline app::XInputState__Boxed* box(app::XInputState value) {
            return il2cpp::box_value<app::XInputState__Boxed>(get_class(), value);
        }
    } // namespace XInputState
} // namespace app::classes::types
