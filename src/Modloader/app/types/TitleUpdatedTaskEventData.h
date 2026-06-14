#pragma once
#include <Modloader/app/structs/TitleUpdatedTaskEventData.h>
#include <Modloader/app/structs/TitleUpdatedTaskEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleUpdatedTaskEventData {
        inline app::TitleUpdatedTaskEventData__Class** type_info() {
            static app::TitleUpdatedTaskEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleUpdatedTaskEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleUpdatedTaskEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleUpdatedTaskEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleUpdatedTaskEventData");
        }
        inline app::TitleUpdatedTaskEventData* create() {
            return il2cpp::create_object<app::TitleUpdatedTaskEventData>(get_class());
        }
    } // namespace TitleUpdatedTaskEventData
} // namespace app::classes::types
