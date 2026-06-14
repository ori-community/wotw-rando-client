#pragma once
#include <Modloader/app/structs/ICharacterTurningHandler.h>
#include <Modloader/app/structs/ICharacterTurningHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICharacterTurningHandler {
        inline app::ICharacterTurningHandler__Class** type_info() {
            static app::ICharacterTurningHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICharacterTurningHandler__Class**)(modloader::win::memory::resolve_rva(0x04721530));
            }
            return cache;
        }
        inline app::ICharacterTurningHandler__Class* get_class() {
            return il2cpp::get_class<app::ICharacterTurningHandler__Class>(type_info(), "", "ICharacterTurningHandler");
        }
    } // namespace ICharacterTurningHandler
} // namespace app::classes::types
