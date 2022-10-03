#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array {
        namespace {
            app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array__Class* type_info_ref = nullptr;
        }
        app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array__Class** type_info = &type_info_ref;
        inline app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array__Class>(type_info, "", "GhostWorldObjectsLifetimePlugin+PendingInstantiation[]");
        }
        inline app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array* create() {
            return il2cpp::create_object<app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array>(get_class());
        }
    } // namespace GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array
} // namespace app::classes::types
