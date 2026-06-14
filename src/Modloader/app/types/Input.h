#pragma once
#include <Modloader/app/structs/Input.h>
#include <Modloader/app/structs/Input__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Input {
        inline app::Input__Class** type_info() {
            static app::Input__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Input__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Input__Class* get_class() {
            return il2cpp::get_class<app::Input__Class>(type_info(), "UnityEngine", "Input");
        }
        inline app::Input* create() {
            return il2cpp::create_object<app::Input>(get_class());
        }
    } // namespace Input
} // namespace app::classes::types
