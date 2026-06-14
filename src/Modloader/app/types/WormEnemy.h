#pragma once
#include <Modloader/app/structs/WormEnemy.h>
#include <Modloader/app/structs/WormEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WormEnemy {
        inline app::WormEnemy__Class** type_info() {
            static app::WormEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WormEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WormEnemy__Class* get_class() {
            return il2cpp::get_class<app::WormEnemy__Class>(type_info(), "", "WormEnemy");
        }
        inline app::WormEnemy* create() {
            return il2cpp::create_object<app::WormEnemy>(get_class());
        }
    } // namespace WormEnemy
} // namespace app::classes::types
