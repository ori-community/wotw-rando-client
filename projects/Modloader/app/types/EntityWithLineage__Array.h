#pragma once
#include <Modloader/app/structs/EntityWithLineage__Array.h>
#include <Modloader/app/structs/EntityWithLineage__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityWithLineage__Array {
        inline app::EntityWithLineage__Array__Class** type_info() {
            static app::EntityWithLineage__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityWithLineage__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityWithLineage__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityWithLineage__Array__Class>(type_info(), "PlayFab.GroupsModels", "EntityWithLineage[]");
        }
        inline app::EntityWithLineage__Array* create() {
            return il2cpp::create_object<app::EntityWithLineage__Array>(get_class());
        }
    } // namespace EntityWithLineage__Array
} // namespace app::classes::types
