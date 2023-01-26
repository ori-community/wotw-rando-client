#pragma once
#include <Modloader/app/structs/TitleLimitChangedEventData.h>
#include <Modloader/app/structs/TitleLimitChangedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleLimitChangedEventData {
        inline app::TitleLimitChangedEventData__Class** type_info() {
            static app::TitleLimitChangedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleLimitChangedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleLimitChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleLimitChangedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleLimitChangedEventData");
        }
        inline app::TitleLimitChangedEventData* create() {
            return il2cpp::create_object<app::TitleLimitChangedEventData>(get_class());
        }
    } // namespace TitleLimitChangedEventData
} // namespace app::classes::types
