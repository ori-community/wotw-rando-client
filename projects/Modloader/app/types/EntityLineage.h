#pragma once
#include <Modloader/app/structs/EntityLineage.h>
#include <Modloader/app/structs/EntityLineage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityLineage {
        inline app::EntityLineage__Class** type_info() {
            static app::EntityLineage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityLineage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityLineage__Class* get_class() {
            return il2cpp::get_class<app::EntityLineage__Class>(type_info(), "PlayFab.ProfilesModels", "EntityLineage");
        }
        inline app::EntityLineage* create() {
            return il2cpp::create_object<app::EntityLineage>(get_class());
        }
    } // namespace EntityLineage
} // namespace app::classes::types
