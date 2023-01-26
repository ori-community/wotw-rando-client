#pragma once
#include <Modloader/app/structs/TentacleEnemy_Joint__Array.h>
#include <Modloader/app/structs/TentacleEnemy_Joint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy_Joint__Array {
        inline app::TentacleEnemy_Joint__Array__Class** type_info() {
            static app::TentacleEnemy_Joint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleEnemy_Joint__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleEnemy_Joint__Array__Class* get_class() {
            return il2cpp::get_class<app::TentacleEnemy_Joint__Array__Class>(type_info(), "", "TentacleEnemy+Joint[]");
        }
        inline app::TentacleEnemy_Joint__Array* create() {
            return il2cpp::create_object<app::TentacleEnemy_Joint__Array>(get_class());
        }
    } // namespace TentacleEnemy_Joint__Array
} // namespace app::classes::types
