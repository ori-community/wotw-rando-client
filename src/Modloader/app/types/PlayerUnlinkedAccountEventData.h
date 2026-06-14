#pragma once
#include <Modloader/app/structs/PlayerUnlinkedAccountEventData.h>
#include <Modloader/app/structs/PlayerUnlinkedAccountEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUnlinkedAccountEventData {
        inline app::PlayerUnlinkedAccountEventData__Class** type_info() {
            static app::PlayerUnlinkedAccountEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerUnlinkedAccountEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerUnlinkedAccountEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerUnlinkedAccountEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerUnlinkedAccountEventData");
        }
        inline app::PlayerUnlinkedAccountEventData* create() {
            return il2cpp::create_object<app::PlayerUnlinkedAccountEventData>(get_class());
        }
    } // namespace PlayerUnlinkedAccountEventData
} // namespace app::classes::types
