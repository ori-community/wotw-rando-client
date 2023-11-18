#pragma once
#include <Modloader/app/structs/RotatingObstacleImpactEffect.h>
#include <Modloader/app/structs/RotatingObstacleImpactEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotatingObstacleImpactEffect {
        inline app::RotatingObstacleImpactEffect__Class** type_info() {
            static app::RotatingObstacleImpactEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotatingObstacleImpactEffect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotatingObstacleImpactEffect__Class* get_class() {
            return il2cpp::get_class<app::RotatingObstacleImpactEffect__Class>(type_info(), "", "RotatingObstacleImpactEffect");
        }
        inline app::RotatingObstacleImpactEffect* create() {
            return il2cpp::create_object<app::RotatingObstacleImpactEffect>(get_class());
        }
    } // namespace RotatingObstacleImpactEffect
} // namespace app::classes::types
