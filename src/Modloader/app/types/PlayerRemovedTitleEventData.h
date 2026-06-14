#pragma once
#include <Modloader/app/structs/PlayerRemovedTitleEventData.h>
#include <Modloader/app/structs/PlayerRemovedTitleEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerRemovedTitleEventData {
        inline app::PlayerRemovedTitleEventData__Class** type_info() {
            static app::PlayerRemovedTitleEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerRemovedTitleEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerRemovedTitleEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerRemovedTitleEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerRemovedTitleEventData");
        }
        inline app::PlayerRemovedTitleEventData* create() {
            return il2cpp::create_object<app::PlayerRemovedTitleEventData>(get_class());
        }
    } // namespace PlayerRemovedTitleEventData
} // namespace app::classes::types
