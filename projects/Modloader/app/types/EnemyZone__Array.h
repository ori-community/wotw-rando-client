#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnemyZone__Array {
        namespace {
            inline app::EnemyZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::EnemyZone__Array__Class** type_info = &type_info_ref;
        inline app::EnemyZone__Array__Class* get_class() {
            return il2cpp::get_class<app::EnemyZone__Array__Class>(type_info, "", "EnemyZone[]");
        }
        inline app::EnemyZone__Array* create() {
            return il2cpp::create_object<app::EnemyZone__Array>(get_class());
        }
    } // namespace EnemyZone__Array
} // namespace app::classes::types
