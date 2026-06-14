#pragma once
#include <Modloader/app/structs/TitleCompletedTaskEventData.h>
#include <Modloader/app/structs/TitleCompletedTaskEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleCompletedTaskEventData {
        inline app::TitleCompletedTaskEventData__Class** type_info() {
            static app::TitleCompletedTaskEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleCompletedTaskEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleCompletedTaskEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleCompletedTaskEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleCompletedTaskEventData");
        }
        inline app::TitleCompletedTaskEventData* create() {
            return il2cpp::create_object<app::TitleCompletedTaskEventData>(get_class());
        }
    } // namespace TitleCompletedTaskEventData
} // namespace app::classes::types
