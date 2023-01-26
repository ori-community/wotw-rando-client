#pragma once
#include <Modloader/app/structs/PlayerTagAddedEventData.h>
#include <Modloader/app/structs/PlayerTagAddedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerTagAddedEventData {
        inline app::PlayerTagAddedEventData__Class** type_info() {
            static app::PlayerTagAddedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerTagAddedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerTagAddedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerTagAddedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerTagAddedEventData");
        }
        inline app::PlayerTagAddedEventData* create() {
            return il2cpp::create_object<app::PlayerTagAddedEventData>(get_class());
        }
    } // namespace PlayerTagAddedEventData
} // namespace app::classes::types
