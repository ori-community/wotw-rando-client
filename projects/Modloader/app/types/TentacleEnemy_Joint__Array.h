#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleEnemy_Joint__Array {
        namespace {
            inline app::TentacleEnemy_Joint__Array__Class* type_info_ref = nullptr;
        }
        inline app::TentacleEnemy_Joint__Array__Class** type_info = &type_info_ref;
        inline app::TentacleEnemy_Joint__Array__Class* get_class() {
            return il2cpp::get_class<app::TentacleEnemy_Joint__Array__Class>(type_info, "", "TentacleEnemy+Joint[]");
        }
        inline app::TentacleEnemy_Joint__Array* create() {
            return il2cpp::create_object<app::TentacleEnemy_Joint__Array>(get_class());
        }
    } // namespace TentacleEnemy_Joint__Array
} // namespace app::classes::types
