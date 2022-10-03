#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerAdOpenedEventData {
        namespace {
            app::PlayerAdOpenedEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerAdOpenedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerAdOpenedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAdOpenedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerAdOpenedEventData");
        }
        inline app::PlayerAdOpenedEventData* create() {
            return il2cpp::create_object<app::PlayerAdOpenedEventData>(get_class());
        }
    } // namespace PlayerAdOpenedEventData
} // namespace app::classes::types
