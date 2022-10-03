#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerStatisticDeletedEventData {
        namespace {
            app::PlayerStatisticDeletedEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerStatisticDeletedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerStatisticDeletedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerStatisticDeletedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerStatisticDeletedEventData");
        }
        inline app::PlayerStatisticDeletedEventData* create() {
            return il2cpp::create_object<app::PlayerStatisticDeletedEventData>(get_class());
        }
    } // namespace PlayerStatisticDeletedEventData
} // namespace app::classes::types
