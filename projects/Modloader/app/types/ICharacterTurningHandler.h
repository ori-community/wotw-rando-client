#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ICharacterTurningHandler__Class.h>

namespace app::classes::types {
    namespace ICharacterTurningHandler {
        inline app::ICharacterTurningHandler__Class** type_info = (app::ICharacterTurningHandler__Class**)(modloader::win::memory::resolve_rva(0x04721530));
        inline app::ICharacterTurningHandler__Class* get_class() {
            return il2cpp::get_class<app::ICharacterTurningHandler__Class>(type_info, "", "ICharacterTurningHandler");
        }
    } // namespace ICharacterTurningHandler
} // namespace app::classes::types
