#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RespawnPlaceholdersInHierarchyAction {
        namespace {
            app::RespawnPlaceholdersInHierarchyAction__Class* type_info_ref = nullptr;
        }
        app::RespawnPlaceholdersInHierarchyAction__Class** type_info = &type_info_ref;
        inline app::RespawnPlaceholdersInHierarchyAction__Class* get_class() {
            return il2cpp::get_class<app::RespawnPlaceholdersInHierarchyAction__Class>(type_info, "", "RespawnPlaceholdersInHierarchyAction");
        }
        inline app::RespawnPlaceholdersInHierarchyAction* create() {
            return il2cpp::create_object<app::RespawnPlaceholdersInHierarchyAction>(get_class());
        }
    } // namespace RespawnPlaceholdersInHierarchyAction
} // namespace app::classes::types
