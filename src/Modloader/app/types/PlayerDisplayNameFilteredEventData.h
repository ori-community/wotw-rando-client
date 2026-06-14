#pragma once
#include <Modloader/app/structs/PlayerDisplayNameFilteredEventData.h>
#include <Modloader/app/structs/PlayerDisplayNameFilteredEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerDisplayNameFilteredEventData {
        inline app::PlayerDisplayNameFilteredEventData__Class** type_info() {
            static app::PlayerDisplayNameFilteredEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerDisplayNameFilteredEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerDisplayNameFilteredEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerDisplayNameFilteredEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerDisplayNameFilteredEventData");
        }
        inline app::PlayerDisplayNameFilteredEventData* create() {
            return il2cpp::create_object<app::PlayerDisplayNameFilteredEventData>(get_class());
        }
    } // namespace PlayerDisplayNameFilteredEventData
} // namespace app::classes::types
