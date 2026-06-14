#pragma once
#include <Modloader/app/structs/KuDoubleJump.h>
#include <Modloader/app/structs/KuDoubleJump__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuDoubleJump {
        inline app::KuDoubleJump__Class** type_info() {
            static app::KuDoubleJump__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuDoubleJump__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuDoubleJump__Class* get_class() {
            return il2cpp::get_class<app::KuDoubleJump__Class>(type_info(), "", "KuDoubleJump");
        }
        inline app::KuDoubleJump* create() {
            return il2cpp::create_object<app::KuDoubleJump>(get_class());
        }
    } // namespace KuDoubleJump
} // namespace app::classes::types
