#pragma once
#include <Modloader/app/structs/SpitterEnemy.h>
#include <Modloader/app/structs/SpitterEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemy {
        inline app::SpitterEnemy__Class** type_info() {
            static app::SpitterEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpitterEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpitterEnemy__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemy__Class>(type_info(), "", "SpitterEnemy");
        }
        inline app::SpitterEnemy* create() {
            return il2cpp::create_object<app::SpitterEnemy>(get_class());
        }
    } // namespace SpitterEnemy
} // namespace app::classes::types
