#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnemyPlatformMovement__Array__Class.h>
#include <Modloader/app/structs/EnemyPlatformMovement__Array.h>

namespace app::classes::types {
    namespace EnemyPlatformMovement__Array {
        namespace {
            inline app::EnemyPlatformMovement__Array__Class* type_info_ref = nullptr;
        }
        inline app::EnemyPlatformMovement__Array__Class** type_info = &type_info_ref;
        inline app::EnemyPlatformMovement__Array__Class* get_class() {
            return il2cpp::get_class<app::EnemyPlatformMovement__Array__Class>(type_info, "", "EnemyPlatformMovement[]");
        }
        inline app::EnemyPlatformMovement__Array* create() {
            return il2cpp::create_object<app::EnemyPlatformMovement__Array>(get_class());
        }
    } // namespace EnemyPlatformMovement__Array
} // namespace app::classes::types
