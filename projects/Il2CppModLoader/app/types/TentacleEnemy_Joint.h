#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy_Joint {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TentacleEnemy_Joint__Class** type_info;
        inline app::TentacleEnemy_Joint__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_Joint__Class>(type_info, "", "TentacleEnemy", "Joint");
        }
        inline app::TentacleEnemy_Joint* create() {
            return il2cpp::create_object<app::TentacleEnemy_Joint>(get_class());
        }
        inline app::TentacleEnemy_Joint__Array* create_array(int size) {
            return il2cpp::array_new<app::TentacleEnemy_Joint__Array>(get_class(), size);
        }
        inline app::TentacleEnemy_Joint__Array* create_array(const std::vector<app::TentacleEnemy_Joint*>& items) {
            return il2cpp::array_new<app::TentacleEnemy_Joint__Array>(get_class(), items);
        }
    } // namespace TentacleEnemy_Joint
} // namespace app::classes::types
