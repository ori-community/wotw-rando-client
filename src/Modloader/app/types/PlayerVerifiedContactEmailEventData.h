#pragma once
#include <Modloader/app/structs/PlayerVerifiedContactEmailEventData.h>
#include <Modloader/app/structs/PlayerVerifiedContactEmailEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerVerifiedContactEmailEventData {
        inline app::PlayerVerifiedContactEmailEventData__Class** type_info() {
            static app::PlayerVerifiedContactEmailEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerVerifiedContactEmailEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerVerifiedContactEmailEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerVerifiedContactEmailEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerVerifiedContactEmailEventData");
        }
        inline app::PlayerVerifiedContactEmailEventData* create() {
            return il2cpp::create_object<app::PlayerVerifiedContactEmailEventData>(get_class());
        }
    } // namespace PlayerVerifiedContactEmailEventData
} // namespace app::classes::types
