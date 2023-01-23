#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TitlePublishedCloudScriptEventData__Class.h>
#include <Modloader/app/structs/TitlePublishedCloudScriptEventData.h>

namespace app::classes::types {
    namespace TitlePublishedCloudScriptEventData {
        namespace {
            inline app::TitlePublishedCloudScriptEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitlePublishedCloudScriptEventData__Class** type_info = &type_info_ref;
        inline app::TitlePublishedCloudScriptEventData__Class* get_class() {
            return il2cpp::get_class<app::TitlePublishedCloudScriptEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitlePublishedCloudScriptEventData");
        }
        inline app::TitlePublishedCloudScriptEventData* create() {
            return il2cpp::create_object<app::TitlePublishedCloudScriptEventData>(get_class());
        }
    } // namespace TitlePublishedCloudScriptEventData
} // namespace app::classes::types
