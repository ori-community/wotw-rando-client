#pragma once
#include <Modloader/app/structs/PlayerCreatedEventData.h>
#include <Modloader/app/structs/PlayerCreatedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerCreatedEventData {
        inline app::PlayerCreatedEventData__Class** type_info() {
            static app::PlayerCreatedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerCreatedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerCreatedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerCreatedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerCreatedEventData");
        }
        inline app::PlayerCreatedEventData* create() {
            return il2cpp::create_object<app::PlayerCreatedEventData>(get_class());
        }
    } // namespace PlayerCreatedEventData
} // namespace app::classes::types
