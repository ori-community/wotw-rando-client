#pragma once
#include <Modloader/app/structs/PlayerAdEndedEventData.h>
#include <Modloader/app/structs/PlayerAdEndedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerAdEndedEventData {
        inline app::PlayerAdEndedEventData__Class** type_info() {
            static app::PlayerAdEndedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerAdEndedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerAdEndedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAdEndedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerAdEndedEventData");
        }
        inline app::PlayerAdEndedEventData* create() {
            return il2cpp::create_object<app::PlayerAdEndedEventData>(get_class());
        }
    } // namespace PlayerAdEndedEventData
} // namespace app::classes::types
