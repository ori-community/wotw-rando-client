#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostCharacterData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostCharacterData__Class** type_info;
        inline app::GhostCharacterData__Class* get_class() {
            return il2cpp::get_class<app::GhostCharacterData__Class>(type_info, "", "GhostCharacterData");
        }
        inline app::GhostCharacterData* create() {
            return il2cpp::create_object<app::GhostCharacterData>(get_class());
        }
    } // namespace GhostCharacterData
} // namespace app::classes::types
