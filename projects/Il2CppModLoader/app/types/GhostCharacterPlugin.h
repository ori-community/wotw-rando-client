#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostCharacterPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostCharacterPlugin__Class** type_info;
        inline app::GhostCharacterPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostCharacterPlugin__Class>(type_info, "", "GhostCharacterPlugin");
        }
        inline app::GhostCharacterPlugin* create() {
            return il2cpp::create_object<app::GhostCharacterPlugin>(get_class());
        }
    } // namespace GhostCharacterPlugin
} // namespace app::classes::types
