#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterPlatformMovement_KickbackEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharacterPlatformMovement_KickbackEntry__Class** type_info;
        inline app::CharacterPlatformMovement_KickbackEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterPlatformMovement_KickbackEntry__Class>(type_info, "", "CharacterPlatformMovement", "KickbackEntry");
        }
        inline app::CharacterPlatformMovement_KickbackEntry* create() {
            return il2cpp::create_object<app::CharacterPlatformMovement_KickbackEntry>(get_class());
        }
    } // namespace CharacterPlatformMovement_KickbackEntry
} // namespace app::classes::types
