#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetTitlePublicKeyResult {
        inline app::GetTitlePublicKeyResult__Class** type_info = (app::GetTitlePublicKeyResult__Class**)(modloader::win::memory::resolve_rva(0x04789628));
        inline app::GetTitlePublicKeyResult__Class* get_class() {
            return il2cpp::get_class<app::GetTitlePublicKeyResult__Class>(type_info, "PlayFab.ClientModels", "GetTitlePublicKeyResult");
        }
        inline app::GetTitlePublicKeyResult* create() {
            return il2cpp::create_object<app::GetTitlePublicKeyResult>(get_class());
        }
    } // namespace GetTitlePublicKeyResult
} // namespace app::classes::types
