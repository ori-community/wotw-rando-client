#pragma once
#include <Modloader/app/structs/PlayerLoggedInEventData.h>
#include <Modloader/app/structs/PlayerLoggedInEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerLoggedInEventData {
        inline app::PlayerLoggedInEventData__Class** type_info() {
            static app::PlayerLoggedInEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerLoggedInEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerLoggedInEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerLoggedInEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerLoggedInEventData");
        }
        inline app::PlayerLoggedInEventData* create() {
            return il2cpp::create_object<app::PlayerLoggedInEventData>(get_class());
        }
    } // namespace PlayerLoggedInEventData
} // namespace app::classes::types
