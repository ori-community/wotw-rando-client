#pragma once
#include <Modloader/app/structs/EntityWithLineage.h>
#include <Modloader/app/structs/EntityWithLineage__Array.h>
#include <Modloader/app/structs/EntityWithLineage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityWithLineage {
        inline app::EntityWithLineage__Class** type_info() {
            static app::EntityWithLineage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityWithLineage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityWithLineage__Class* get_class() {
            return il2cpp::get_class<app::EntityWithLineage__Class>(type_info(), "PlayFab.GroupsModels", "EntityWithLineage");
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
