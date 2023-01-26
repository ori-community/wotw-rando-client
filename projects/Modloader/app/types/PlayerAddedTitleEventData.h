#pragma once
#include <Modloader/app/structs/PlayerAddedTitleEventData.h>
#include <Modloader/app/structs/PlayerAddedTitleEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerAddedTitleEventData {
        inline app::PlayerAddedTitleEventData__Class** type_info() {
            static app::PlayerAddedTitleEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerAddedTitleEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerAddedTitleEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerAddedTitleEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerAddedTitleEventData");
        }
        inline app::PlayerAddedTitleEventData* create() {
            return il2cpp::create_object<app::PlayerAddedTitleEventData>(get_class());
        }
    } // namespace PlayerAddedTitleEventData
} // namespace app::classes::types
