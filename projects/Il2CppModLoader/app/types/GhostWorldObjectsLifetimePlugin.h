#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostWorldObjectsLifetimePlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostWorldObjectsLifetimePlugin__Class** type_info;
        inline app::GhostWorldObjectsLifetimePlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostWorldObjectsLifetimePlugin__Class>(type_info, "", "GhostWorldObjectsLifetimePlugin");
        }
        inline app::GhostWorldObjectsLifetimePlugin* create() {
            return il2cpp::create_object<app::GhostWorldObjectsLifetimePlugin>(get_class());
        }
    } // namespace GhostWorldObjectsLifetimePlugin
} // namespace app::classes::types
