#pragma once
#include <Modloader/app/structs/BatEnemy.h>
#include <Modloader/app/structs/BatEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BatEnemy {
        inline app::BatEnemy__Class** type_info() {
            static app::BatEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BatEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BatEnemy__Class* get_class() {
            return il2cpp::get_class<app::BatEnemy__Class>(type_info(), "", "BatEnemy");
        }
        inline app::BatEnemy* create() {
            return il2cpp::create_object<app::BatEnemy>(get_class());
        }
    } // namespace BatEnemy
} // namespace app::classes::types
