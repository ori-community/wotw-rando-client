#pragma once
#include <Modloader/app/structs/Button_c.h>
#include <Modloader/app/structs/Button_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Button_c {
        inline app::Button_c__Class** type_info() {
            static app::Button_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Button_c__Class**)(modloader::win::memory::resolve_rva(0x04787828));
            }
            return cache;
        }
        inline app::Button_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Button_c__Class>(type_info(), "Moon.UI", "Button", "<>c");
        }
        inline app::Button_c* create() {
            return il2cpp::create_object<app::Button_c>(get_class());
        }
    } // namespace Button_c
} // namespace app::classes::types
