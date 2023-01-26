#pragma once
#include <Modloader/app/structs/PlayerActionExecutedEventData.h>
#include <Modloader/app/structs/PlayerActionExecutedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerActionExecutedEventData {
        inline app::PlayerActionExecutedEventData__Class** type_info() {
            static app::PlayerActionExecutedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerActionExecutedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerActionExecutedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerActionExecutedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerActionExecutedEventData");
        }
        inline app::PlayerActionExecutedEventData* create() {
            return il2cpp::create_object<app::PlayerActionExecutedEventData>(get_class());
        }
    } // namespace PlayerActionExecutedEventData
} // namespace app::classes::types
