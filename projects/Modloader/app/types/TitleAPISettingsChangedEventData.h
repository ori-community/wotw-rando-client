#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TitleAPISettingsChangedEventData {
        namespace {
            inline app::TitleAPISettingsChangedEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleAPISettingsChangedEventData__Class** type_info = &type_info_ref;
        inline app::TitleAPISettingsChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleAPISettingsChangedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleAPISettingsChangedEventData");
        }
        inline app::TitleAPISettingsChangedEventData* create() {
            return il2cpp::create_object<app::TitleAPISettingsChangedEventData>(get_class());
        }
    } // namespace TitleAPISettingsChangedEventData
} // namespace app::classes::types
