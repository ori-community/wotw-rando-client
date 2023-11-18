#pragma once
#include <Modloader/app/structs/TitleCreatedTaskEventData.h>
#include <Modloader/app/structs/TitleCreatedTaskEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleCreatedTaskEventData {
        inline app::TitleCreatedTaskEventData__Class** type_info() {
            static app::TitleCreatedTaskEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleCreatedTaskEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleCreatedTaskEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleCreatedTaskEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleCreatedTaskEventData");
        }
        inline app::TitleCreatedTaskEventData* create() {
            return il2cpp::create_object<app::TitleCreatedTaskEventData>(get_class());
        }
    } // namespace TitleCreatedTaskEventData
} // namespace app::classes::types
