#pragma once
#include <Modloader/app/structs/MoveToBehaviour.h>
#include <Modloader/app/structs/MoveToBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveToBehaviour {
        inline app::MoveToBehaviour__Class** type_info() {
            static app::MoveToBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoveToBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoveToBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MoveToBehaviour__Class>(type_info(), "Moon", "MoveToBehaviour");
        }
        inline app::MoveToBehaviour* create() {
            return il2cpp::create_object<app::MoveToBehaviour>(get_class());
        }
    } // namespace MoveToBehaviour
} // namespace app::classes::types
