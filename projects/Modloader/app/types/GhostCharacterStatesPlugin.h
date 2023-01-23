#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GhostCharacterStatesPlugin__Class.h>
#include <Modloader/app/structs/GhostCharacterStatesPlugin.h>

namespace app::classes::types {
    namespace GhostCharacterStatesPlugin {
        namespace {
            inline app::GhostCharacterStatesPlugin__Class* type_info_ref = nullptr;
        }
        inline app::GhostCharacterStatesPlugin__Class** type_info = &type_info_ref;
        inline app::GhostCharacterStatesPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostCharacterStatesPlugin__Class>(type_info, "", "GhostCharacterStatesPlugin");
        }
        inline app::GhostCharacterStatesPlugin* create() {
            return il2cpp::create_object<app::GhostCharacterStatesPlugin>(get_class());
        }
    } // namespace GhostCharacterStatesPlugin
} // namespace app::classes::types
