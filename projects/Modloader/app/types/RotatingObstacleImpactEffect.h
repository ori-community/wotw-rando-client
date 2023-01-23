#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RotatingObstacleImpactEffect__Class.h>
#include <Modloader/app/structs/RotatingObstacleImpactEffect.h>

namespace app::classes::types {
    namespace RotatingObstacleImpactEffect {
        namespace {
            inline app::RotatingObstacleImpactEffect__Class* type_info_ref = nullptr;
        }
        inline app::RotatingObstacleImpactEffect__Class** type_info = &type_info_ref;
        inline app::RotatingObstacleImpactEffect__Class* get_class() {
            return il2cpp::get_class<app::RotatingObstacleImpactEffect__Class>(type_info, "", "RotatingObstacleImpactEffect");
        }
        inline app::RotatingObstacleImpactEffect* create() {
            return il2cpp::create_object<app::RotatingObstacleImpactEffect>(get_class());
        }
    } // namespace RotatingObstacleImpactEffect
} // namespace app::classes::types
