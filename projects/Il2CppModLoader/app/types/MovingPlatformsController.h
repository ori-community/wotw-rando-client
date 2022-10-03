#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MovingPlatformsController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MovingPlatformsController__Class** type_info;
        inline app::MovingPlatformsController__Class* get_class() {
            return il2cpp::get_class<app::MovingPlatformsController__Class>(type_info, "", "MovingPlatformsController");
        }
        inline app::MovingPlatformsController* create() {
            return il2cpp::create_object<app::MovingPlatformsController>(get_class());
        }
    } // namespace MovingPlatformsController
} // namespace app::classes::types
