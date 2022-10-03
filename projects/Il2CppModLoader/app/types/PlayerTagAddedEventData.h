#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerTagAddedEventData {
        namespace {
            app::PlayerTagAddedEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerTagAddedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerTagAddedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerTagAddedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerTagAddedEventData");
        }
        inline app::PlayerTagAddedEventData* create() {
            return il2cpp::create_object<app::PlayerTagAddedEventData>(get_class());
        }
    } // namespace PlayerTagAddedEventData
} // namespace app::classes::types
