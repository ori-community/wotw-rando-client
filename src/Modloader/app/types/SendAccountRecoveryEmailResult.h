#pragma once
#include <Modloader/app/structs/SendAccountRecoveryEmailResult.h>
#include <Modloader/app/structs/SendAccountRecoveryEmailResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SendAccountRecoveryEmailResult {
        inline app::SendAccountRecoveryEmailResult__Class** type_info() {
            static app::SendAccountRecoveryEmailResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SendAccountRecoveryEmailResult__Class**)(modloader::win::memory::resolve_rva(0x04799CA0));
            }
            return cache;
        }
        inline app::SendAccountRecoveryEmailResult__Class* get_class() {
            return il2cpp::get_class<app::SendAccountRecoveryEmailResult__Class>(type_info(), "PlayFab.ClientModels", "SendAccountRecoveryEmailResult");
        }
        inline app::SendAccountRecoveryEmailResult* create() {
            return il2cpp::create_object<app::SendAccountRecoveryEmailResult>(get_class());
        }
    } // namespace SendAccountRecoveryEmailResult
} // namespace app::classes::types
