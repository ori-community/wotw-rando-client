#pragma once
#include <Modloader/app/structs/PlayerCompletedPasswordResetEventData.h>
#include <Modloader/app/structs/PlayerCompletedPasswordResetEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerCompletedPasswordResetEventData {
        inline app::PlayerCompletedPasswordResetEventData__Class** type_info() {
            static app::PlayerCompletedPasswordResetEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerCompletedPasswordResetEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerCompletedPasswordResetEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerCompletedPasswordResetEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerCompletedPasswordResetEventData");
        }
        inline app::PlayerCompletedPasswordResetEventData* create() {
            return il2cpp::create_object<app::PlayerCompletedPasswordResetEventData>(get_class());
        }
    } // namespace PlayerCompletedPasswordResetEventData
} // namespace app::classes::types
