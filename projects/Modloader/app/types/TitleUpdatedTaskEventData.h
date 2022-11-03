#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TitleUpdatedTaskEventData {
        namespace {
            inline app::TitleUpdatedTaskEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleUpdatedTaskEventData__Class** type_info = &type_info_ref;
        inline app::TitleUpdatedTaskEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleUpdatedTaskEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleUpdatedTaskEventData");
        }
        inline app::TitleUpdatedTaskEventData* create() {
            return il2cpp::create_object<app::TitleUpdatedTaskEventData>(get_class());
        }
    } // namespace TitleUpdatedTaskEventData
} // namespace app::classes::types
