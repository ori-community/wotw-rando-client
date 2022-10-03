#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveTowardsFloatTweenable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoveTowardsFloatTweenable__Class** type_info;
        inline app::MoveTowardsFloatTweenable__Class* get_class() {
            return il2cpp::get_class<app::MoveTowardsFloatTweenable__Class>(type_info, "Moon", "MoveTowardsFloatTweenable");
        }
        inline app::MoveTowardsFloatTweenable* create() {
            return il2cpp::create_object<app::MoveTowardsFloatTweenable>(get_class());
        }
    } // namespace MoveTowardsFloatTweenable
} // namespace app::classes::types
