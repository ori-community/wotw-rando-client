#pragma once
#include <Modloader/app/structs/Screen.h>
#include <Modloader/app/structs/Screen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Screen {
        inline app::Screen__Class** type_info() {
            static app::Screen__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Screen__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Screen__Class* get_class() {
            return il2cpp::get_class<app::Screen__Class>(type_info(), "UnityEngine", "Screen");
        }
        inline app::Screen* create() {
            return il2cpp::create_object<app::Screen>(get_class());
        }
    } // namespace Screen
} // namespace app::classes::types
