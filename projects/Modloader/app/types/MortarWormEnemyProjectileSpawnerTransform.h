#pragma once
#include <Modloader/app/structs/MortarWormEnemyProjectileSpawnerTransform.h>
#include <Modloader/app/structs/MortarWormEnemyProjectileSpawnerTransform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarWormEnemyProjectileSpawnerTransform {
        inline app::MortarWormEnemyProjectileSpawnerTransform__Class** type_info() {
            static app::MortarWormEnemyProjectileSpawnerTransform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MortarWormEnemyProjectileSpawnerTransform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MortarWormEnemyProjectileSpawnerTransform__Class* get_class() {
            return il2cpp::get_class<app::MortarWormEnemyProjectileSpawnerTransform__Class>(type_info(), "", "MortarWormEnemyProjectileSpawnerTransform");
        }
        inline app::MortarWormEnemyProjectileSpawnerTransform* create() {
            return il2cpp::create_object<app::MortarWormEnemyProjectileSpawnerTransform>(get_class());
        }
    } // namespace MortarWormEnemyProjectileSpawnerTransform
} // namespace app::classes::types
