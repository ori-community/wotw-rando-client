#pragma once
#include <Modloader/app/structs/GhostCharacterData.h>
#include <Modloader/app/structs/GhostCharacterData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostCharacterData {
        inline app::GhostCharacterData__Class** type_info() {
            static app::GhostCharacterData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostCharacterData__Class**)(modloader::win::memory::resolve_rva(0x047381B0));
            }
            return cache;
        }
        inline app::GhostCharacterData__Class* get_class() {
            return il2cpp::get_class<app::GhostCharacterData__Class>(type_info(), "", "GhostCharacterData");
        }
        inline app::GhostCharacterData* create() {
            return il2cpp::create_object<app::GhostCharacterData>(get_class());
        }
    } // namespace GhostCharacterData
} // namespace app::classes::types
