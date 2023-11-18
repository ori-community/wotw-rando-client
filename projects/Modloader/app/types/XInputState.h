#pragma once
#include <Modloader/app/structs/XInputState.h>
#include <Modloader/app/structs/XInputState__Boxed.h>
#include <Modloader/app/structs/XInputState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XInputState {
        inline app::XInputState__Class** type_info() {
            static app::XInputState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XInputState__Class**)(modloader::win::memory::resolve_rva(0x04756EB0));
            }
            return cache;
        }
        inline app::XInputState__Class* get_class() {
            return il2cpp::get_class<app::XInputState__Class>(type_info(), "J2i.Net.XInputWrapper", "XInputState");
        }
        inline app::XInputState* create() {
            return il2cpp::create_object<app::XInputState>(get_class());
        }
        inline app::XInputState__Boxed* box(app::XInputState value) {
            return il2cpp::box_value<app::XInputState__Boxed>(get_class(), value);
        }
    } // namespace XInputState
} // namespace app::classes::types
