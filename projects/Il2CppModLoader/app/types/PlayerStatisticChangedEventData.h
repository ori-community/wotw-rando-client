#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerStatisticChangedEventData {
        namespace {
            app::PlayerStatisticChangedEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerStatisticChangedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerStatisticChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerStatisticChangedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerStatisticChangedEventData");
        }
        inline app::PlayerStatisticChangedEventData* create() {
            return il2cpp::create_object<app::PlayerStatisticChangedEventData>(get_class());
        }
    } // namespace PlayerStatisticChangedEventData
} // namespace app::classes::types
