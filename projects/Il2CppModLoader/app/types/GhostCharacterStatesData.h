#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostCharacterStatesData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostCharacterStatesData__Class** type_info;
        inline app::GhostCharacterStatesData__Class* get_class() {
            return il2cpp::get_class<app::GhostCharacterStatesData__Class>(type_info, "", "GhostCharacterStatesData");
        }
        inline app::GhostCharacterStatesData* create() {
            return il2cpp::create_object<app::GhostCharacterStatesData>(get_class());
        }
    } // namespace GhostCharacterStatesData
} // namespace app::classes::types
