#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
