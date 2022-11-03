#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerBannedEventData {
        namespace {
            inline app::PlayerBannedEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerBannedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerBannedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerBannedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerBannedEventData");
        }
        inline app::PlayerBannedEventData* create() {
            return il2cpp::create_object<app::PlayerBannedEventData>(get_class());
        }
    } // namespace PlayerBannedEventData
} // namespace app::classes::types
