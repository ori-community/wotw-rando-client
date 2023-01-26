#pragma once
#include <Modloader/app/structs/PlayerLinkedAccountEventData.h>
#include <Modloader/app/structs/PlayerLinkedAccountEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerLinkedAccountEventData {
        inline app::PlayerLinkedAccountEventData__Class** type_info() {
            static app::PlayerLinkedAccountEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerLinkedAccountEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerLinkedAccountEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerLinkedAccountEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerLinkedAccountEventData");
        }
        inline app::PlayerLinkedAccountEventData* create() {
            return il2cpp::create_object<app::PlayerLinkedAccountEventData>(get_class());
        }
    } // namespace PlayerLinkedAccountEventData
} // namespace app::classes::types
