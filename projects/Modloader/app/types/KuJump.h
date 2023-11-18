#pragma once
#include <Modloader/app/structs/KuJump.h>
#include <Modloader/app/structs/KuJump__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuJump {
        inline app::KuJump__Class** type_info() {
            static app::KuJump__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuJump__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuJump__Class* get_class() {
            return il2cpp::get_class<app::KuJump__Class>(type_info(), "", "KuJump");
        }
        inline app::KuJump* create() {
            return il2cpp::create_object<app::KuJump>(get_class());
        }
    } // namespace KuJump
} // namespace app::classes::types
