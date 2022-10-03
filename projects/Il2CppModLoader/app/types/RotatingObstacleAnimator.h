#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotatingObstacleAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RotatingObstacleAnimator__Class** type_info;
        inline app::RotatingObstacleAnimator__Class* get_class() {
            return il2cpp::get_class<app::RotatingObstacleAnimator__Class>(type_info, "", "RotatingObstacleAnimator");
        }
        inline app::RotatingObstacleAnimator* create() {
            return il2cpp::create_object<app::RotatingObstacleAnimator>(get_class());
        }
    } // namespace RotatingObstacleAnimator
} // namespace app::classes::types
