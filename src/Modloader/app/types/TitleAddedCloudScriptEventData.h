#pragma once
#include <Modloader/app/structs/TitleAddedCloudScriptEventData.h>
#include <Modloader/app/structs/TitleAddedCloudScriptEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleAddedCloudScriptEventData {
        inline app::TitleAddedCloudScriptEventData__Class** type_info() {
            static app::TitleAddedCloudScriptEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleAddedCloudScriptEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleAddedCloudScriptEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleAddedCloudScriptEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleAddedCloudScriptEventData");
        }
        inline app::TitleAddedCloudScriptEventData* create() {
            return il2cpp::create_object<app::TitleAddedCloudScriptEventData>(get_class());
        }
    } // namespace TitleAddedCloudScriptEventData
} // namespace app::classes::types
