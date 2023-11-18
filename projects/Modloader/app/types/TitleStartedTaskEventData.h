#pragma once
#include <Modloader/app/structs/TitleStartedTaskEventData.h>
#include <Modloader/app/structs/TitleStartedTaskEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleStartedTaskEventData {
        inline app::TitleStartedTaskEventData__Class** type_info() {
            static app::TitleStartedTaskEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleStartedTaskEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleStartedTaskEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleStartedTaskEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleStartedTaskEventData");
        }
        inline app::TitleStartedTaskEventData* create() {
            return il2cpp::create_object<app::TitleStartedTaskEventData>(get_class());
        }
    } // namespace TitleStartedTaskEventData
} // namespace app::classes::types
