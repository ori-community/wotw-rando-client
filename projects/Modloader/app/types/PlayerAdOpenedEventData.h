#pragma once
#include <Modloader/app/structs/PlayerAdOpenedEventData.h>
#include <Modloader/app/structs/PlayerAdOpenedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerAdOpenedEventData {
        inline app::PlayerAdOpenedEventData__Class** type_info() {
            static app::PlayerAdOpenedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerAdOpenedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerAdOpenedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAdOpenedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerAdOpenedEventData");
        }
        inline app::PlayerAdOpenedEventData* create() {
            return il2cpp::create_object<app::PlayerAdOpenedEventData>(get_class());
        }
    } // namespace PlayerAdOpenedEventData
} // namespace app::classes::types
