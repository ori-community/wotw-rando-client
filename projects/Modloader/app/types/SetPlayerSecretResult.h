#pragma once
#include <Modloader/app/structs/SetPlayerSecretResult.h>
#include <Modloader/app/structs/SetPlayerSecretResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetPlayerSecretResult {
        inline app::SetPlayerSecretResult__Class** type_info() {
            static app::SetPlayerSecretResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetPlayerSecretResult__Class**)(modloader::win::memory::resolve_rva(0x0473F148));
            }
            return cache;
        }
        inline app::SetPlayerSecretResult__Class* get_class() {
            return il2cpp::get_class<app::SetPlayerSecretResult__Class>(type_info(), "PlayFab.ClientModels", "SetPlayerSecretResult");
        }
        inline app::SetPlayerSecretResult* create() {
            return il2cpp::create_object<app::SetPlayerSecretResult>(get_class());
        }
    } // namespace SetPlayerSecretResult
} // namespace app::classes::types
