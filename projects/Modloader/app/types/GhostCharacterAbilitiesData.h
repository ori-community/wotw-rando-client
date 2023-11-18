#pragma once
#include <Modloader/app/structs/GhostCharacterAbilitiesData.h>
#include <Modloader/app/structs/GhostCharacterAbilitiesData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostCharacterAbilitiesData {
        inline app::GhostCharacterAbilitiesData__Class** type_info() {
            static app::GhostCharacterAbilitiesData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostCharacterAbilitiesData__Class**)(modloader::win::memory::resolve_rva(0x0475A658));
            }
            return cache;
        }
        inline app::GhostCharacterAbilitiesData__Class* get_class() {
            return il2cpp::get_class<app::GhostCharacterAbilitiesData__Class>(type_info(), "", "GhostCharacterAbilitiesData");
        }
        inline app::GhostCharacterAbilitiesData* create() {
            return il2cpp::create_object<app::GhostCharacterAbilitiesData>(get_class());
        }
    } // namespace GhostCharacterAbilitiesData
} // namespace app::classes::types
