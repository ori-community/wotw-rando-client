#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityWithLineage {
        namespace {
            app::EntityWithLineage__Class* type_info_ref = nullptr;
        }
        app::EntityWithLineage__Class** type_info = &type_info_ref;
        inline app::EntityWithLineage__Class* get_class() {
            return il2cpp::get_class<app::EntityWithLineage__Class>(type_info, "PlayFab.GroupsModels", "EntityWithLineage");
        }
        inline app::EntityWithLineage* create() {
            return il2cpp::create_object<app::EntityWithLineage>(get_class());
        }
        inline app::EntityWithLineage__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityWithLineage__Array>(get_class(), size);
        }
        inline app::EntityWithLineage__Array* create_array(const std::vector<app::EntityWithLineage*>& items) {
            return il2cpp::array_new<app::EntityWithLineage__Array>(get_class(), items);
        }
    } // namespace EntityWithLineage
} // namespace app::classes::types
