#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICharacterTurningHandler {
        inline app::ICharacterTurningHandler__Class** type_info = (app::ICharacterTurningHandler__Class**)(modloader::win::memory::resolve_rva(0x04721530));
        inline app::ICharacterTurningHandler__Class* get_class() {
            return il2cpp::get_class<app::ICharacterTurningHandler__Class>(type_info, "", "ICharacterTurningHandler");
        }
    } // namespace ICharacterTurningHandler
} // namespace app::classes::types
