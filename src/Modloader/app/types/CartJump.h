#pragma once
#include <Modloader/app/structs/CartJump.h>
#include <Modloader/app/structs/CartJump__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartJump {
        inline app::CartJump__Class** type_info() {
            static app::CartJump__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartJump__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartJump__Class* get_class() {
            return il2cpp::get_class<app::CartJump__Class>(type_info(), "", "CartJump");
        }
        inline app::CartJump* create() {
            return il2cpp::create_object<app::CartJump>(get_class());
        }
    } // namespace CartJump
} // namespace app::classes::types
