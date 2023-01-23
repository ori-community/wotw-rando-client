#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FloatingRockLaserEnemyAnimations__Class.h>
#include <Modloader/app/structs/FloatingRockLaserEnemyAnimations.h>

namespace app::classes::types {
    namespace FloatingRockLaserEnemyAnimations {
        namespace {
            inline app::FloatingRockLaserEnemyAnimations__Class* type_info_ref = nullptr;
        }
        inline app::FloatingRockLaserEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::FloatingRockLaserEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockLaserEnemyAnimations__Class>(type_info, "", "FloatingRockLaserEnemyAnimations");
        }
        inline app::FloatingRockLaserEnemyAnimations* create() {
            return il2cpp::create_object<app::FloatingRockLaserEnemyAnimations>(get_class());
        }
    } // namespace FloatingRockLaserEnemyAnimations
} // namespace app::classes::types
