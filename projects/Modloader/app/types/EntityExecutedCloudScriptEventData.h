#pragma once
#include <Modloader/app/structs/EntityExecutedCloudScriptEventData.h>
#include <Modloader/app/structs/EntityExecutedCloudScriptEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityExecutedCloudScriptEventData {
        inline app::EntityExecutedCloudScriptEventData__Class** type_info() {
            static app::EntityExecutedCloudScriptEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityExecutedCloudScriptEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityExecutedCloudScriptEventData__Class* get_class() {
            return il2cpp::get_class<app::EntityExecutedCloudScriptEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "EntityExecutedCloudScriptEventData");
        }
        inline app::EntityExecutedCloudScriptEventData* create() {
            return il2cpp::create_object<app::EntityExecutedCloudScriptEventData>(get_class());
        }
    } // namespace EntityExecutedCloudScriptEventData
} // namespace app::classes::types
