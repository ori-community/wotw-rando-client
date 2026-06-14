#pragma once
#include <Modloader/app/structs/RammingEnemy.h>
#include <Modloader/app/structs/RammingEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingEnemy {
        inline app::RammingEnemy__Class** type_info() {
            static app::RammingEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RammingEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RammingEnemy__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemy__Class>(type_info(), "", "RammingEnemy");
        }
        inline app::RammingEnemy* create() {
            return il2cpp::create_object<app::RammingEnemy>(get_class());
        }
    } // namespace RammingEnemy
} // namespace app::classes::types
