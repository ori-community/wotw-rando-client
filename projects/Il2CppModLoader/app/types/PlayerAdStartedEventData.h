#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerAdStartedEventData {
        namespace {
            app::PlayerAdStartedEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerAdStartedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerAdStartedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAdStartedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerAdStartedEventData");
        }
        inline app::PlayerAdStartedEventData* create() {
            return il2cpp::create_object<app::PlayerAdStartedEventData>(get_class());
        }
    } // namespace PlayerAdStartedEventData
} // namespace app::classes::types
