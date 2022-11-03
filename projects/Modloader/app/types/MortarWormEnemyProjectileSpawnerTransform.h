#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarWormEnemyProjectileSpawnerTransform {
        namespace {
            inline app::MortarWormEnemyProjectileSpawnerTransform__Class* type_info_ref = nullptr;
        }
        inline app::MortarWormEnemyProjectileSpawnerTransform__Class** type_info = &type_info_ref;
        inline app::MortarWormEnemyProjectileSpawnerTransform__Class* get_class() {
            return il2cpp::get_class<app::MortarWormEnemyProjectileSpawnerTransform__Class>(type_info, "", "MortarWormEnemyProjectileSpawnerTransform");
        }
        inline app::MortarWormEnemyProjectileSpawnerTransform* create() {
            return il2cpp::create_object<app::MortarWormEnemyProjectileSpawnerTransform>(get_class());
        }
    } // namespace MortarWormEnemyProjectileSpawnerTransform
} // namespace app::classes::types
