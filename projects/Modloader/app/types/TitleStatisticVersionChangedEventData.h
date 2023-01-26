#pragma once
#include <Modloader/app/structs/TitleStatisticVersionChangedEventData.h>
#include <Modloader/app/structs/TitleStatisticVersionChangedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleStatisticVersionChangedEventData {
        inline app::TitleStatisticVersionChangedEventData__Class** type_info() {
            static app::TitleStatisticVersionChangedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleStatisticVersionChangedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleStatisticVersionChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleStatisticVersionChangedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleStatisticVersionChangedEventData");
        }
        inline app::TitleStatisticVersionChangedEventData* create() {
            return il2cpp::create_object<app::TitleStatisticVersionChangedEventData>(get_class());
        }
    } // namespace TitleStatisticVersionChangedEventData
} // namespace app::classes::types
