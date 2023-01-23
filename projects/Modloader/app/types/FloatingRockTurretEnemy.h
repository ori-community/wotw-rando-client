#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FloatingRockTurretEnemy__Class.h>
#include <Modloader/app/structs/FloatingRockTurretEnemy.h>

namespace app::classes::types {
    namespace FloatingRockTurretEnemy {
        namespace {
            inline app::FloatingRockTurretEnemy__Class* type_info_ref = nullptr;
        }
        inline app::FloatingRockTurretEnemy__Class** type_info = &type_info_ref;
        inline app::FloatingRockTurretEnemy__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockTurretEnemy__Class>(type_info, "", "FloatingRockTurretEnemy");
        }
        inline app::FloatingRockTurretEnemy* create() {
            return il2cpp::create_object<app::FloatingRockTurretEnemy>(get_class());
        }
    } // namespace FloatingRockTurretEnemy
} // namespace app::classes::types
