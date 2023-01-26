#pragma once
#include <Modloader/app/structs/DashOwlEnemy.h>
#include <Modloader/app/structs/DashOwlEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashOwlEnemy {
        inline app::DashOwlEnemy__Class** type_info() {
            static app::DashOwlEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DashOwlEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DashOwlEnemy__Class* get_class() {
            return il2cpp::get_class<app::DashOwlEnemy__Class>(type_info(), "", "DashOwlEnemy");
        }
        inline app::DashOwlEnemy* create() {
            return il2cpp::create_object<app::DashOwlEnemy>(get_class());
        }
    } // namespace DashOwlEnemy
} // namespace app::classes::types
