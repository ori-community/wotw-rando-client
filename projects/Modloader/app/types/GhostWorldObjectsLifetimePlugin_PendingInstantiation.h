#pragma once
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_PendingInstantiation.h>
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array.h>
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_PendingInstantiation__Boxed.h>
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_PendingInstantiation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostWorldObjectsLifetimePlugin_PendingInstantiation {
        inline app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Class** type_info() {
            static app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Class>(type_info(), "", "GhostWorldObjectsLifetimePlugin", "PendingInstantiation");
        }
        inline app::GhostWorldObjectsLifetimePlugin_PendingInstantiation* create() {
            return il2cpp::create_object<app::GhostWorldObjectsLifetimePlugin_PendingInstantiation>(get_class());
        }
        inline app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Boxed* box(app::GhostWorldObjectsLifetimePlugin_PendingInstantiation value) {
            return il2cpp::box_value<app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Boxed>(get_class(), value);
        }
        inline app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array>(get_class(), size);
        }
        inline app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array* create_array(const std::vector<app::GhostWorldObjectsLifetimePlugin_PendingInstantiation>& items) {
            return il2cpp::array_new<app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array>(get_class(), items);
        }
    } // namespace GhostWorldObjectsLifetimePlugin_PendingInstantiation
} // namespace app::classes::types
