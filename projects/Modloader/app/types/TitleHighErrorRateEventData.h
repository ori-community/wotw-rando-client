#pragma once
#include <Modloader/app/structs/TitleHighErrorRateEventData.h>
#include <Modloader/app/structs/TitleHighErrorRateEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleHighErrorRateEventData {
        inline app::TitleHighErrorRateEventData__Class** type_info() {
            static app::TitleHighErrorRateEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleHighErrorRateEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleHighErrorRateEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleHighErrorRateEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleHighErrorRateEventData");
        }
        inline app::TitleHighErrorRateEventData* create() {
            return il2cpp::create_object<app::TitleHighErrorRateEventData>(get_class());
        }
    } // namespace TitleHighErrorRateEventData
} // namespace app::classes::types
