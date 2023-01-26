#pragma once
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array.h>
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array {
        inline app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array__Class** type_info() {
            static app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array__Class>(type_info(), "", "GhostWorldObjectsLifetimePlugin+PendingInstantiation[]");
        }
        inline app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array* create() {
            return il2cpp::create_object<app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array>(get_class());
        }
    } // namespace GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array
} // namespace app::classes::types
