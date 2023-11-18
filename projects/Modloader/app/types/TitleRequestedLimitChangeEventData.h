#pragma once
#include <Modloader/app/structs/TitleRequestedLimitChangeEventData.h>
#include <Modloader/app/structs/TitleRequestedLimitChangeEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleRequestedLimitChangeEventData {
        inline app::TitleRequestedLimitChangeEventData__Class** type_info() {
            static app::TitleRequestedLimitChangeEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleRequestedLimitChangeEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleRequestedLimitChangeEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleRequestedLimitChangeEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleRequestedLimitChangeEventData");
        }
        inline app::TitleRequestedLimitChangeEventData* create() {
            return il2cpp::create_object<app::TitleRequestedLimitChangeEventData>(get_class());
        }
    } // namespace TitleRequestedLimitChangeEventData
} // namespace app::classes::types
