#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Orbs_OrbDisplayText {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Orbs_OrbDisplayText__Class** type_info;
        inline app::Orbs_OrbDisplayText__Class* get_class() {
            return il2cpp::get_nested_class<app::Orbs_OrbDisplayText__Class>(type_info, "Game", "Orbs", "OrbDisplayText");
        }
        inline app::Orbs_OrbDisplayText* create() {
            return il2cpp::create_object<app::Orbs_OrbDisplayText>(get_class());
        }
    } // namespace Orbs_OrbDisplayText
} // namespace app::classes::types
