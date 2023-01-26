#pragma once
#include <Modloader/app/structs/OwlEnemy.h>
#include <Modloader/app/structs/OwlEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OwlEnemy {
        inline app::OwlEnemy__Class** type_info() {
            static app::OwlEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OwlEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OwlEnemy__Class* get_class() {
            return il2cpp::get_class<app::OwlEnemy__Class>(type_info(), "", "OwlEnemy");
        }
        inline app::OwlEnemy* create() {
            return il2cpp::create_object<app::OwlEnemy>(get_class());
        }
    } // namespace OwlEnemy
} // namespace app::classes::types
