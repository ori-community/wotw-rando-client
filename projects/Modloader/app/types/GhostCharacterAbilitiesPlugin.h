#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostCharacterAbilitiesPlugin {
        inline app::GhostCharacterAbilitiesPlugin__Class** type_info = (app::GhostCharacterAbilitiesPlugin__Class**)(modloader::win::memory::resolve_rva(0x0472B0A8));
        inline app::GhostCharacterAbilitiesPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostCharacterAbilitiesPlugin__Class>(type_info, "", "GhostCharacterAbilitiesPlugin");
        }
        inline app::GhostCharacterAbilitiesPlugin* create() {
            return il2cpp::create_object<app::GhostCharacterAbilitiesPlugin>(get_class());
        }
    } // namespace GhostCharacterAbilitiesPlugin
} // namespace app::classes::types
