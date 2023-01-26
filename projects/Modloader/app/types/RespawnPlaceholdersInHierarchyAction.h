#pragma once
#include <Modloader/app/structs/RespawnPlaceholdersInHierarchyAction.h>
#include <Modloader/app/structs/RespawnPlaceholdersInHierarchyAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RespawnPlaceholdersInHierarchyAction {
        inline app::RespawnPlaceholdersInHierarchyAction__Class** type_info() {
            static app::RespawnPlaceholdersInHierarchyAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RespawnPlaceholdersInHierarchyAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RespawnPlaceholdersInHierarchyAction__Class* get_class() {
            return il2cpp::get_class<app::RespawnPlaceholdersInHierarchyAction__Class>(type_info(), "", "RespawnPlaceholdersInHierarchyAction");
        }
        inline app::RespawnPlaceholdersInHierarchyAction* create() {
            return il2cpp::create_object<app::RespawnPlaceholdersInHierarchyAction>(get_class());
        }
    } // namespace RespawnPlaceholdersInHierarchyAction
} // namespace app::classes::types
