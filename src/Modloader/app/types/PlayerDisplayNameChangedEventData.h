#pragma once
#include <Modloader/app/structs/PlayerDisplayNameChangedEventData.h>
#include <Modloader/app/structs/PlayerDisplayNameChangedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerDisplayNameChangedEventData {
        inline app::PlayerDisplayNameChangedEventData__Class** type_info() {
            static app::PlayerDisplayNameChangedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerDisplayNameChangedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerDisplayNameChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerDisplayNameChangedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerDisplayNameChangedEventData");
        }
        inline app::PlayerDisplayNameChangedEventData* create() {
            return il2cpp::create_object<app::PlayerDisplayNameChangedEventData>(get_class());
        }
    } // namespace PlayerDisplayNameChangedEventData
} // namespace app::classes::types
