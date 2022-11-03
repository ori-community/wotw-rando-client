#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerPasswordResetLinkSentEventData {
        namespace {
            inline app::PlayerPasswordResetLinkSentEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerPasswordResetLinkSentEventData__Class** type_info = &type_info_ref;
        inline app::PlayerPasswordResetLinkSentEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerPasswordResetLinkSentEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerPasswordResetLinkSentEventData");
        }
        inline app::PlayerPasswordResetLinkSentEventData* create() {
            return il2cpp::create_object<app::PlayerPasswordResetLinkSentEventData>(get_class());
        }
    } // namespace PlayerPasswordResetLinkSentEventData
} // namespace app::classes::types
