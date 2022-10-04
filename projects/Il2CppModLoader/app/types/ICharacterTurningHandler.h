#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICharacterTurningHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICharacterTurningHandler__Class** type_info;
        inline app::ICharacterTurningHandler__Class* get_class() {
            return il2cpp::get_class<app::ICharacterTurningHandler__Class>(type_info, "", "ICharacterTurningHandler");
        }
    } // namespace ICharacterTurningHandler
} // namespace app::classes::types
