#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TitleAddedCloudScriptEventData {
        namespace {
            inline app::TitleAddedCloudScriptEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleAddedCloudScriptEventData__Class** type_info = &type_info_ref;
        inline app::TitleAddedCloudScriptEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleAddedCloudScriptEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleAddedCloudScriptEventData");
        }
        inline app::TitleAddedCloudScriptEventData* create() {
            return il2cpp::create_object<app::TitleAddedCloudScriptEventData>(get_class());
        }
    } // namespace TitleAddedCloudScriptEventData
} // namespace app::classes::types
