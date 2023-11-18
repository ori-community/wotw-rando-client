#pragma once
#include <Modloader/app/structs/PlayerPasswordResetLinkSentEventData.h>
#include <Modloader/app/structs/PlayerPasswordResetLinkSentEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerPasswordResetLinkSentEventData {
        inline app::PlayerPasswordResetLinkSentEventData__Class** type_info() {
            static app::PlayerPasswordResetLinkSentEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerPasswordResetLinkSentEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerPasswordResetLinkSentEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerPasswordResetLinkSentEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerPasswordResetLinkSentEventData");
        }
        inline app::PlayerPasswordResetLinkSentEventData* create() {
            return il2cpp::create_object<app::PlayerPasswordResetLinkSentEventData>(get_class());
        }
    } // namespace PlayerPasswordResetLinkSentEventData
} // namespace app::classes::types
