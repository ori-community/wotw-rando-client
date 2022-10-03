#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerDisplayNameFilteredEventData {
        namespace {
            app::PlayerDisplayNameFilteredEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerDisplayNameFilteredEventData__Class** type_info = &type_info_ref;
        inline app::PlayerDisplayNameFilteredEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerDisplayNameFilteredEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerDisplayNameFilteredEventData");
        }
        inline app::PlayerDisplayNameFilteredEventData* create() {
            return il2cpp::create_object<app::PlayerDisplayNameFilteredEventData>(get_class());
        }
    } // namespace PlayerDisplayNameFilteredEventData
} // namespace app::classes::types
