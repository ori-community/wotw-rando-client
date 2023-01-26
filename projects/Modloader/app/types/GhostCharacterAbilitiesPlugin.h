#pragma once
#include <Modloader/app/structs/GhostCharacterAbilitiesPlugin.h>
#include <Modloader/app/structs/GhostCharacterAbilitiesPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostCharacterAbilitiesPlugin {
        inline app::GhostCharacterAbilitiesPlugin__Class** type_info() {
            static app::GhostCharacterAbilitiesPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostCharacterAbilitiesPlugin__Class**)(modloader::win::memory::resolve_rva(0x0472B0A8));
            }
            return cache;
        }
        inline app::GhostCharacterAbilitiesPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostCharacterAbilitiesPlugin__Class>(type_info(), "", "GhostCharacterAbilitiesPlugin");
        }
        inline app::GhostCharacterAbilitiesPlugin* create() {
            return il2cpp::create_object<app::GhostCharacterAbilitiesPlugin>(get_class());
        }
    } // namespace GhostCharacterAbilitiesPlugin
} // namespace app::classes::types
