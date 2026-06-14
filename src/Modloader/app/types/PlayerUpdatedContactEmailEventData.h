#pragma once
#include <Modloader/app/structs/PlayerUpdatedContactEmailEventData.h>
#include <Modloader/app/structs/PlayerUpdatedContactEmailEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUpdatedContactEmailEventData {
        inline app::PlayerUpdatedContactEmailEventData__Class** type_info() {
            static app::PlayerUpdatedContactEmailEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerUpdatedContactEmailEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerUpdatedContactEmailEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerUpdatedContactEmailEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerUpdatedContactEmailEventData");
        }
        inline app::PlayerUpdatedContactEmailEventData* create() {
            return il2cpp::create_object<app::PlayerUpdatedContactEmailEventData>(get_class());
        }
    } // namespace PlayerUpdatedContactEmailEventData
} // namespace app::classes::types
