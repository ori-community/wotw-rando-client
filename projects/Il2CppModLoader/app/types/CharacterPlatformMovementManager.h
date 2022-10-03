#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterPlatformMovementManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharacterPlatformMovementManager__Class** type_info;
        inline app::CharacterPlatformMovementManager__Class* get_class() {
            return il2cpp::get_class<app::CharacterPlatformMovementManager__Class>(type_info, "", "CharacterPlatformMovementManager");
        }
        inline app::CharacterPlatformMovementManager* create() {
            return il2cpp::create_object<app::CharacterPlatformMovementManager>(get_class());
        }
    } // namespace CharacterPlatformMovementManager
} // namespace app::classes::types
