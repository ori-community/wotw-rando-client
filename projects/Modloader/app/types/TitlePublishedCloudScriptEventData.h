#pragma once
#include <Modloader/app/structs/TitlePublishedCloudScriptEventData.h>
#include <Modloader/app/structs/TitlePublishedCloudScriptEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitlePublishedCloudScriptEventData {
        inline app::TitlePublishedCloudScriptEventData__Class** type_info() {
            static app::TitlePublishedCloudScriptEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitlePublishedCloudScriptEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitlePublishedCloudScriptEventData__Class* get_class() {
            return il2cpp::get_class<app::TitlePublishedCloudScriptEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitlePublishedCloudScriptEventData");
        }
        inline app::TitlePublishedCloudScriptEventData* create() {
            return il2cpp::create_object<app::TitlePublishedCloudScriptEventData>(get_class());
        }
    } // namespace TitlePublishedCloudScriptEventData
} // namespace app::classes::types
