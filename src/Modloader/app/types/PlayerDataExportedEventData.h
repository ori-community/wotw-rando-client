#pragma once
#include <Modloader/app/structs/PlayerDataExportedEventData.h>
#include <Modloader/app/structs/PlayerDataExportedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerDataExportedEventData {
        inline app::PlayerDataExportedEventData__Class** type_info() {
            static app::PlayerDataExportedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerDataExportedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerDataExportedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerDataExportedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerDataExportedEventData");
        }
        inline app::PlayerDataExportedEventData* create() {
            return il2cpp::create_object<app::PlayerDataExportedEventData>(get_class());
        }
    } // namespace PlayerDataExportedEventData
} // namespace app::classes::types
