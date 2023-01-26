#pragma once
#include <Modloader/app/structs/SendCustomAccountRecoveryEmailResult.h>
#include <Modloader/app/structs/SendCustomAccountRecoveryEmailResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SendCustomAccountRecoveryEmailResult {
        inline app::SendCustomAccountRecoveryEmailResult__Class** type_info() {
            static app::SendCustomAccountRecoveryEmailResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SendCustomAccountRecoveryEmailResult__Class**)(modloader::win::memory::resolve_rva(0x0477CEE8));
            }
            return cache;
        }
        inline app::SendCustomAccountRecoveryEmailResult__Class* get_class() {
            return il2cpp::get_class<app::SendCustomAccountRecoveryEmailResult__Class>(type_info(), "PlayFab.ServerModels", "SendCustomAccountRecoveryEmailResult");
        }
        inline app::SendCustomAccountRecoveryEmailResult* create() {
            return il2cpp::create_object<app::SendCustomAccountRecoveryEmailResult>(get_class());
        }
    } // namespace SendCustomAccountRecoveryEmailResult
} // namespace app::classes::types
