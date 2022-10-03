#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterPlatformMovement_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharacterPlatformMovement_c__Class** type_info;
        inline app::CharacterPlatformMovement_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterPlatformMovement_c__Class>(type_info, "", "CharacterPlatformMovement", "<>c");
        }
        inline app::CharacterPlatformMovement_c* create() {
            return il2cpp::create_object<app::CharacterPlatformMovement_c>(get_class());
        }
    } // namespace CharacterPlatformMovement_c
} // namespace app::classes::types
