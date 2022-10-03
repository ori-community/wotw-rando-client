#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveTowardsColorTweenable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoveTowardsColorTweenable__Class** type_info;
        inline app::MoveTowardsColorTweenable__Class* get_class() {
            return il2cpp::get_class<app::MoveTowardsColorTweenable__Class>(type_info, "Moon", "MoveTowardsColorTweenable");
        }
        inline app::MoveTowardsColorTweenable* create() {
            return il2cpp::create_object<app::MoveTowardsColorTweenable>(get_class());
        }
    } // namespace MoveTowardsColorTweenable
} // namespace app::classes::types
