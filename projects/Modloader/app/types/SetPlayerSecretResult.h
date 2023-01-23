#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetPlayerSecretResult__Class.h>
#include <Modloader/app/structs/SetPlayerSecretResult.h>

namespace app::classes::types {
    namespace SetPlayerSecretResult {
        inline app::SetPlayerSecretResult__Class** type_info = (app::SetPlayerSecretResult__Class**)(modloader::win::memory::resolve_rva(0x0473F148));
        inline app::SetPlayerSecretResult__Class* get_class() {
            return il2cpp::get_class<app::SetPlayerSecretResult__Class>(type_info, "PlayFab.ClientModels", "SetPlayerSecretResult");
        }
        inline app::SetPlayerSecretResult* create() {
            return il2cpp::create_object<app::SetPlayerSecretResult>(get_class());
        }
    } // namespace SetPlayerSecretResult
} // namespace app::classes::types
