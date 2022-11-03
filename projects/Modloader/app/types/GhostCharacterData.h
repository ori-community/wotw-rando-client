#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostCharacterData {
        inline app::GhostCharacterData__Class** type_info = (app::GhostCharacterData__Class**)(modloader::win::memory::resolve_rva(0x047381B0));
        inline app::GhostCharacterData__Class* get_class() {
            return il2cpp::get_class<app::GhostCharacterData__Class>(type_info, "", "GhostCharacterData");
        }
        inline app::GhostCharacterData* create() {
            return il2cpp::create_object<app::GhostCharacterData>(get_class());
        }
    } // namespace GhostCharacterData
} // namespace app::classes::types
