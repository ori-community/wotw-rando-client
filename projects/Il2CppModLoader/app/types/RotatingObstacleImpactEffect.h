#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotatingObstacleImpactEffect {
        namespace {
            app::RotatingObstacleImpactEffect__Class* type_info_ref = nullptr;
        }
        app::RotatingObstacleImpactEffect__Class** type_info = &type_info_ref;
        inline app::RotatingObstacleImpactEffect__Class* get_class() {
            return il2cpp::get_class<app::RotatingObstacleImpactEffect__Class>(type_info, "", "RotatingObstacleImpactEffect");
        }
        inline app::RotatingObstacleImpactEffect* create() {
            return il2cpp::create_object<app::RotatingObstacleImpactEffect>(get_class());
        }
    } // namespace RotatingObstacleImpactEffect
} // namespace app::classes::types
