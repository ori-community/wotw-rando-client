#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerCompletedPasswordResetEventData {
        namespace {
            app::PlayerCompletedPasswordResetEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerCompletedPasswordResetEventData__Class** type_info = &type_info_ref;
        inline app::PlayerCompletedPasswordResetEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerCompletedPasswordResetEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerCompletedPasswordResetEventData");
        }
        inline app::PlayerCompletedPasswordResetEventData* create() {
            return il2cpp::create_object<app::PlayerCompletedPasswordResetEventData>(get_class());
        }
    } // namespace PlayerCompletedPasswordResetEventData
} // namespace app::classes::types
