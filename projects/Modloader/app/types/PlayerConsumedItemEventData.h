#pragma once
#include <Modloader/app/structs/PlayerConsumedItemEventData.h>
#include <Modloader/app/structs/PlayerConsumedItemEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerConsumedItemEventData {
        inline app::PlayerConsumedItemEventData__Class** type_info() {
            static app::PlayerConsumedItemEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerConsumedItemEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerConsumedItemEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerConsumedItemEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerConsumedItemEventData");
        }
        inline app::PlayerConsumedItemEventData* create() {
            return il2cpp::create_object<app::PlayerConsumedItemEventData>(get_class());
        }
    } // namespace PlayerConsumedItemEventData
} // namespace app::classes::types
