#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityExecutedCloudScriptEventData {
        namespace {
            inline app::EntityExecutedCloudScriptEventData__Class* type_info_ref = nullptr;
        }
        inline app::EntityExecutedCloudScriptEventData__Class** type_info = &type_info_ref;
        inline app::EntityExecutedCloudScriptEventData__Class* get_class() {
            return il2cpp::get_class<app::EntityExecutedCloudScriptEventData__Class>(type_info, "PlayFab.PlayStreamModels", "EntityExecutedCloudScriptEventData");
        }
        inline app::EntityExecutedCloudScriptEventData* create() {
            return il2cpp::create_object<app::EntityExecutedCloudScriptEventData>(get_class());
        }
    } // namespace EntityExecutedCloudScriptEventData
} // namespace app::classes::types
