#pragma once
#include <Modloader/app/structs/TitleAPISettingsChangedEventData.h>
#include <Modloader/app/structs/TitleAPISettingsChangedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleAPISettingsChangedEventData {
        inline app::TitleAPISettingsChangedEventData__Class** type_info() {
            static app::TitleAPISettingsChangedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleAPISettingsChangedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleAPISettingsChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleAPISettingsChangedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleAPISettingsChangedEventData");
        }
        inline app::TitleAPISettingsChangedEventData* create() {
            return il2cpp::create_object<app::TitleAPISettingsChangedEventData>(get_class());
        }
    } // namespace TitleAPISettingsChangedEventData
} // namespace app::classes::types
