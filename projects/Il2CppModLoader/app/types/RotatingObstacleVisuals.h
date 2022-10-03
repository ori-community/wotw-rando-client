#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotatingObstacleVisuals {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RotatingObstacleVisuals__Class** type_info;
        inline app::RotatingObstacleVisuals__Class* get_class() {
            return il2cpp::get_class<app::RotatingObstacleVisuals__Class>(type_info, "", "RotatingObstacleVisuals");
        }
        inline app::RotatingObstacleVisuals* create() {
            return il2cpp::create_object<app::RotatingObstacleVisuals>(get_class());
        }
    } // namespace RotatingObstacleVisuals
} // namespace app::classes::types
