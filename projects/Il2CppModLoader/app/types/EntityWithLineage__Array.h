#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityWithLineage__Array {
        namespace {
            app::EntityWithLineage__Array__Class* type_info_ref = nullptr;
        }
        app::EntityWithLineage__Array__Class** type_info = &type_info_ref;
        inline app::EntityWithLineage__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityWithLineage__Array__Class>(type_info, "PlayFab.GroupsModels", "EntityWithLineage[]");
        }
        inline app::EntityWithLineage__Array* create() {
            return il2cpp::create_object<app::EntityWithLineage__Array>(get_class());
        }
    } // namespace EntityWithLineage__Array
} // namespace app::classes::types
