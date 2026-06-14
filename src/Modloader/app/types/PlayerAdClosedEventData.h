#pragma once
#include <Modloader/app/structs/PlayerAdClosedEventData.h>
#include <Modloader/app/structs/PlayerAdClosedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerAdClosedEventData {
        inline app::PlayerAdClosedEventData__Class** type_info() {
            static app::PlayerAdClosedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerAdClosedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerAdClosedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAdClosedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerAdClosedEventData");
        }
        inline app::PlayerAdClosedEventData* create() {
            return il2cpp::create_object<app::PlayerAdClosedEventData>(get_class());
        }
    } // namespace PlayerAdClosedEventData
} // namespace app::classes::types
