#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerDataExportedEventData__Class.h>
#include <Modloader/app/structs/PlayerDataExportedEventData.h>

namespace app::classes::types {
    namespace PlayerDataExportedEventData {
        namespace {
            inline app::PlayerDataExportedEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerDataExportedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerDataExportedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerDataExportedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerDataExportedEventData");
        }
        inline app::PlayerDataExportedEventData* create() {
            return il2cpp::create_object<app::PlayerDataExportedEventData>(get_class());
        }
    } // namespace PlayerDataExportedEventData
} // namespace app::classes::types
