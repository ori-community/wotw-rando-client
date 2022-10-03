#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitlePublishedCloudScriptEventData {
        namespace {
            app::TitlePublishedCloudScriptEventData__Class* type_info_ref = nullptr;
        }
        app::TitlePublishedCloudScriptEventData__Class** type_info = &type_info_ref;
        inline app::TitlePublishedCloudScriptEventData__Class* get_class() {
            return il2cpp::get_class<app::TitlePublishedCloudScriptEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitlePublishedCloudScriptEventData");
        }
        inline app::TitlePublishedCloudScriptEventData* create() {
            return il2cpp::create_object<app::TitlePublishedCloudScriptEventData>(get_class());
        }
    } // namespace TitlePublishedCloudScriptEventData
} // namespace app::classes::types
