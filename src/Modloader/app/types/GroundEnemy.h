#pragma once
#include <Modloader/app/structs/GroundEnemy.h>
#include <Modloader/app/structs/GroundEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundEnemy {
        inline app::GroundEnemy__Class** type_info() {
            static app::GroundEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundEnemy__Class* get_class() {
            return il2cpp::get_class<app::GroundEnemy__Class>(type_info(), "", "GroundEnemy");
        }
        inline app::GroundEnemy* create() {
            return il2cpp::create_object<app::GroundEnemy>(get_class());
        }
    } // namespace GroundEnemy
} // namespace app::classes::types
