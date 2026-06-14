#pragma once
#include <Modloader/app/structs/RockyEnemy.h>
#include <Modloader/app/structs/RockyEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemy {
        inline app::RockyEnemy__Class** type_info() {
            static app::RockyEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RockyEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RockyEnemy__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemy__Class>(type_info(), "", "RockyEnemy");
        }
        inline app::RockyEnemy* create() {
            return il2cpp::create_object<app::RockyEnemy>(get_class());
        }
    } // namespace RockyEnemy
} // namespace app::classes::types
