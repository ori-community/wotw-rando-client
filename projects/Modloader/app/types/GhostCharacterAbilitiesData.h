#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostCharacterAbilitiesData {
        inline app::GhostCharacterAbilitiesData__Class** type_info = (app::GhostCharacterAbilitiesData__Class**)(modloader::win::memory::resolve_rva(0x0475A658));
        inline app::GhostCharacterAbilitiesData__Class* get_class() {
            return il2cpp::get_class<app::GhostCharacterAbilitiesData__Class>(type_info, "", "GhostCharacterAbilitiesData");
        }
        inline app::GhostCharacterAbilitiesData* create() {
            return il2cpp::create_object<app::GhostCharacterAbilitiesData>(get_class());
        }
    } // namespace GhostCharacterAbilitiesData
} // namespace app::classes::types
