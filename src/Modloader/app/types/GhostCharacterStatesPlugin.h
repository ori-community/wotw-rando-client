#pragma once
#include <Modloader/app/structs/GhostCharacterStatesPlugin.h>
#include <Modloader/app/structs/GhostCharacterStatesPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostCharacterStatesPlugin {
        inline app::GhostCharacterStatesPlugin__Class** type_info() {
            static app::GhostCharacterStatesPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostCharacterStatesPlugin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostCharacterStatesPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostCharacterStatesPlugin__Class>(type_info(), "", "GhostCharacterStatesPlugin");
        }
        inline app::GhostCharacterStatesPlugin* create() {
            return il2cpp::create_object<app::GhostCharacterStatesPlugin>(get_class());
        }
    } // namespace GhostCharacterStatesPlugin
} // namespace app::classes::types
