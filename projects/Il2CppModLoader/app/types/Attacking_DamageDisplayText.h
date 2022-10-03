#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Attacking_DamageDisplayText {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Attacking_DamageDisplayText__Class** type_info;
        inline app::Attacking_DamageDisplayText__Class* get_class() {
            return il2cpp::get_nested_class<app::Attacking_DamageDisplayText__Class>(type_info, "Game", "Attacking", "DamageDisplayText");
        }
        inline app::Attacking_DamageDisplayText* create() {
            return il2cpp::create_object<app::Attacking_DamageDisplayText>(get_class());
        }
    } // namespace Attacking_DamageDisplayText
} // namespace app::classes::types
