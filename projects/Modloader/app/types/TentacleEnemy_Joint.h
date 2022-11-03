#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleEnemy_Joint {
        inline app::TentacleEnemy_Joint__Class** type_info = (app::TentacleEnemy_Joint__Class**)(modloader::win::memory::resolve_rva(0x047867D0));
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
