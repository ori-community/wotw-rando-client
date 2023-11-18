#pragma once
#include <Modloader/app/structs/PlayerAdStartedEventData.h>
#include <Modloader/app/structs/PlayerAdStartedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerAdStartedEventData {
        inline app::PlayerAdStartedEventData__Class** type_info() {
            static app::PlayerAdStartedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerAdStartedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerAdStartedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAdStartedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerAdStartedEventData");
        }
        inline app::PlayerAdStartedEventData* create() {
            return il2cpp::create_object<app::PlayerAdStartedEventData>(get_class());
        }
    } // namespace PlayerAdStartedEventData
} // namespace app::classes::types
