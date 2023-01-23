#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TitleNewsUpdatedEventData__Class.h>
#include <Modloader/app/structs/TitleNewsUpdatedEventData.h>

namespace app::classes::types {
    namespace TitleNewsUpdatedEventData {
        namespace {
            inline app::TitleNewsUpdatedEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleNewsUpdatedEventData__Class** type_info = &type_info_ref;
        inline app::TitleNewsUpdatedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleNewsUpdatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleNewsUpdatedEventData");
        }
        inline app::TitleNewsUpdatedEventData* create() {
            return il2cpp::create_object<app::TitleNewsUpdatedEventData>(get_class());
        }
    } // namespace TitleNewsUpdatedEventData
} // namespace app::classes::types
