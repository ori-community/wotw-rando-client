#pragma once
#include <Modloader/app/structs/GhostCharacterPlugin.h>
#include <Modloader/app/structs/GhostCharacterPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostCharacterPlugin {
        inline app::GhostCharacterPlugin__Class** type_info() {
            static app::GhostCharacterPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostCharacterPlugin__Class**)(modloader::win::memory::resolve_rva(0x04743E78));
            }
            return cache;
        }
        inline app::GhostCharacterPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostCharacterPlugin__Class>(type_info(), "", "GhostCharacterPlugin");
        }
        inline app::GhostCharacterPlugin* create() {
            return il2cpp::create_object<app::GhostCharacterPlugin>(get_class());
        }
    } // namespace GhostCharacterPlugin
} // namespace app::classes::types
