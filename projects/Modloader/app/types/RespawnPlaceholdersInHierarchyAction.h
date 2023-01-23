#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RespawnPlaceholdersInHierarchyAction__Class.h>
#include <Modloader/app/structs/RespawnPlaceholdersInHierarchyAction.h>

namespace app::classes::types {
    namespace RespawnPlaceholdersInHierarchyAction {
        namespace {
            inline app::RespawnPlaceholdersInHierarchyAction__Class* type_info_ref = nullptr;
        }
        inline app::RespawnPlaceholdersInHierarchyAction__Class** type_info = &type_info_ref;
        inline app::RespawnPlaceholdersInHierarchyAction__Class* get_class() {
            return il2cpp::get_class<app::RespawnPlaceholdersInHierarchyAction__Class>(type_info, "", "RespawnPlaceholdersInHierarchyAction");
        }
        inline app::RespawnPlaceholdersInHierarchyAction* create() {
            return il2cpp::create_object<app::RespawnPlaceholdersInHierarchyAction>(get_class());
        }
    } // namespace RespawnPlaceholdersInHierarchyAction
} // namespace app::classes::types
