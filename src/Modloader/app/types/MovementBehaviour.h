#pragma once
#include <Modloader/app/structs/MovementBehaviour.h>
#include <Modloader/app/structs/MovementBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MovementBehaviour {
        inline app::MovementBehaviour__Class** type_info() {
            static app::MovementBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MovementBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MovementBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MovementBehaviour__Class>(type_info(), "", "MovementBehaviour");
        }
        inline app::MovementBehaviour* create() {
            return il2cpp::create_object<app::MovementBehaviour>(get_class());
        }
    } // namespace MovementBehaviour
} // namespace app::classes::types
