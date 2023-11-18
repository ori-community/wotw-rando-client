#pragma once
#include <Modloader/app/structs/TitleAbortedTaskEventData.h>
#include <Modloader/app/structs/TitleAbortedTaskEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleAbortedTaskEventData {
        inline app::TitleAbortedTaskEventData__Class** type_info() {
            static app::TitleAbortedTaskEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleAbortedTaskEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleAbortedTaskEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleAbortedTaskEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleAbortedTaskEventData");
        }
        inline app::TitleAbortedTaskEventData* create() {
            return il2cpp::create_object<app::TitleAbortedTaskEventData>(get_class());
        }
    } // namespace TitleAbortedTaskEventData
} // namespace app::classes::types
