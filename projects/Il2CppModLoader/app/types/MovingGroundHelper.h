#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MovingGroundHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MovingGroundHelper__Class** type_info;
        inline app::MovingGroundHelper__Class* get_class() {
            return il2cpp::get_class<app::MovingGroundHelper__Class>(type_info, "", "MovingGroundHelper");
        }
        inline app::MovingGroundHelper* create() {
            return il2cpp::create_object<app::MovingGroundHelper>(get_class());
        }
    } // namespace MovingGroundHelper
} // namespace app::classes::types
