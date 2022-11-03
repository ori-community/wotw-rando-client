#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SendCustomAccountRecoveryEmailRequest {
        inline app::SendCustomAccountRecoveryEmailRequest__Class** type_info = (app::SendCustomAccountRecoveryEmailRequest__Class**)(modloader::win::memory::resolve_rva(0x04733898));
        inline app::SendCustomAccountRecoveryEmailRequest__Class* get_class() {
            return il2cpp::get_class<app::SendCustomAccountRecoveryEmailRequest__Class>(type_info, "PlayFab.ServerModels", "SendCustomAccountRecoveryEmailRequest");
        }
        inline app::SendCustomAccountRecoveryEmailRequest* create() {
            return il2cpp::create_object<app::SendCustomAccountRecoveryEmailRequest>(get_class());
        }
    } // namespace SendCustomAccountRecoveryEmailRequest
} // namespace app::classes::types
