#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveTowardsVector3Tweenable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoveTowardsVector3Tweenable__Class** type_info;
        inline app::MoveTowardsVector3Tweenable__Class* get_class() {
            return il2cpp::get_class<app::MoveTowardsVector3Tweenable__Class>(type_info, "Moon", "MoveTowardsVector3Tweenable");
        }
        inline app::MoveTowardsVector3Tweenable* create() {
            return il2cpp::create_object<app::MoveTowardsVector3Tweenable>(get_class());
        }
    } // namespace MoveTowardsVector3Tweenable
} // namespace app::classes::types
