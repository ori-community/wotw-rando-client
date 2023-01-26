#pragma once
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin.h>
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostWorldObjectsLifetimePlugin {
        inline app::GhostWorldObjectsLifetimePlugin__Class** type_info() {
            static app::GhostWorldObjectsLifetimePlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostWorldObjectsLifetimePlugin__Class**)(modloader::win::memory::resolve_rva(0x047517F8));
            }
            return cache;
        }
        inline app::GhostWorldObjectsLifetimePlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostWorldObjectsLifetimePlugin__Class>(type_info(), "", "GhostWorldObjectsLifetimePlugin");
        }
        inline app::GhostWorldObjectsLifetimePlugin* create() {
            return il2cpp::create_object<app::GhostWorldObjectsLifetimePlugin>(get_class());
        }
    } // namespace GhostWorldObjectsLifetimePlugin
} // namespace app::classes::types
