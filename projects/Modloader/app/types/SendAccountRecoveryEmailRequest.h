#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SendAccountRecoveryEmailRequest {
        inline app::SendAccountRecoveryEmailRequest__Class** type_info = (app::SendAccountRecoveryEmailRequest__Class**)(modloader::win::memory::resolve_rva(0x0478F830));
        inline app::SendAccountRecoveryEmailRequest__Class* get_class() {
            return il2cpp::get_class<app::SendAccountRecoveryEmailRequest__Class>(type_info, "PlayFab.ClientModels", "SendAccountRecoveryEmailRequest");
        }
        inline app::SendAccountRecoveryEmailRequest* create() {
            return il2cpp::create_object<app::SendAccountRecoveryEmailRequest>(get_class());
        }
    } // namespace SendAccountRecoveryEmailRequest
} // namespace app::classes::types
