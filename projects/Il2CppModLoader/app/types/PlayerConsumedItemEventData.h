#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerConsumedItemEventData {
        namespace {
            app::PlayerConsumedItemEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerConsumedItemEventData__Class** type_info = &type_info_ref;
        inline app::PlayerConsumedItemEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerConsumedItemEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerConsumedItemEventData");
        }
        inline app::PlayerConsumedItemEventData* create() {
            return il2cpp::create_object<app::PlayerConsumedItemEventData>(get_class());
        }
    } // namespace PlayerConsumedItemEventData
} // namespace app::classes::types
