#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerSetProfilePropertyEventData {
        namespace {
            app::PlayerSetProfilePropertyEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerSetProfilePropertyEventData__Class** type_info = &type_info_ref;
        inline app::PlayerSetProfilePropertyEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerSetProfilePropertyEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerSetProfilePropertyEventData");
        }
        inline app::PlayerSetProfilePropertyEventData* create() {
            return il2cpp::create_object<app::PlayerSetProfilePropertyEventData>(get_class());
        }
    } // namespace PlayerSetProfilePropertyEventData
} // namespace app::classes::types
