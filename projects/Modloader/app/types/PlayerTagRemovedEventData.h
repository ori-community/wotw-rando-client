#pragma once
#include <Modloader/app/structs/PlayerTagRemovedEventData.h>
#include <Modloader/app/structs/PlayerTagRemovedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerTagRemovedEventData {
        inline app::PlayerTagRemovedEventData__Class** type_info() {
            static app::PlayerTagRemovedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerTagRemovedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerTagRemovedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerTagRemovedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerTagRemovedEventData");
        }
        inline app::PlayerTagRemovedEventData* create() {
            return il2cpp::create_object<app::PlayerTagRemovedEventData>(get_class());
        }
    } // namespace PlayerTagRemovedEventData
} // namespace app::classes::types
