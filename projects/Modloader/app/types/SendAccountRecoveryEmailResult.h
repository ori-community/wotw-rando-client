#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SendAccountRecoveryEmailResult__Class.h>
#include <Modloader/app/structs/SendAccountRecoveryEmailResult.h>

namespace app::classes::types {
    namespace SendAccountRecoveryEmailResult {
        inline app::SendAccountRecoveryEmailResult__Class** type_info = (app::SendAccountRecoveryEmailResult__Class**)(modloader::win::memory::resolve_rva(0x04799CA0));
        inline app::SendAccountRecoveryEmailResult__Class* get_class() {
            return il2cpp::get_class<app::SendAccountRecoveryEmailResult__Class>(type_info, "PlayFab.ClientModels", "SendAccountRecoveryEmailResult");
        }
        inline app::SendAccountRecoveryEmailResult* create() {
            return il2cpp::create_object<app::SendAccountRecoveryEmailResult>(get_class());
        }
    } // namespace SendAccountRecoveryEmailResult
} // namespace app::classes::types
