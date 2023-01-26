#pragma once
#include <Modloader/app/structs/TentacleEnemy.h>
#include <Modloader/app/structs/TentacleEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy {
        inline app::TentacleEnemy__Class** type_info() {
            static app::TentacleEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleEnemy__Class* get_class() {
            return il2cpp::get_class<app::TentacleEnemy__Class>(type_info(), "", "TentacleEnemy");
        }
        inline app::TentacleEnemy* create() {
            return il2cpp::create_object<app::TentacleEnemy>(get_class());
        }
    } // namespace TentacleEnemy
} // namespace app::classes::types
