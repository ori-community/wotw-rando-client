#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FloatingRockLaserEnemy__Class.h>
#include <Modloader/app/structs/FloatingRockLaserEnemy.h>

namespace app::classes::types {
    namespace FloatingRockLaserEnemy {
        namespace {
            inline app::FloatingRockLaserEnemy__Class* type_info_ref = nullptr;
        }
        inline app::FloatingRockLaserEnemy__Class** type_info = &type_info_ref;
        inline app::FloatingRockLaserEnemy__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockLaserEnemy__Class>(type_info, "", "FloatingRockLaserEnemy");
        }
        inline app::FloatingRockLaserEnemy* create() {
            return il2cpp::create_object<app::FloatingRockLaserEnemy>(get_class());
        }
    } // namespace FloatingRockLaserEnemy
} // namespace app::classes::types
