#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerDisplayNameChangedEventData {
        namespace {
            app::PlayerDisplayNameChangedEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerDisplayNameChangedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerDisplayNameChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerDisplayNameChangedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerDisplayNameChangedEventData");
        }
        inline app::PlayerDisplayNameChangedEventData* create() {
            return il2cpp::create_object<app::PlayerDisplayNameChangedEventData>(get_class());
        }
    } // namespace PlayerDisplayNameChangedEventData
} // namespace app::classes::types
