#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserShooterMinibossSpawn__Class.h>
#include <Modloader/app/structs/LaserShooterMinibossSpawn.h>

namespace app::classes::types {
    namespace LaserShooterMinibossSpawn {
        namespace {
            inline app::LaserShooterMinibossSpawn__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterMinibossSpawn__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossSpawn__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossSpawn__Class>(type_info, "", "LaserShooterMinibossSpawn");
        }
        inline app::LaserShooterMinibossSpawn* create() {
            return il2cpp::create_object<app::LaserShooterMinibossSpawn>(get_class());
        }
    } // namespace LaserShooterMinibossSpawn
} // namespace app::classes::types
