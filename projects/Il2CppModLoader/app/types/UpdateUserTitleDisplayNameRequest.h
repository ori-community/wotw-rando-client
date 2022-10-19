#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateUserTitleDisplayNameRequest {
        inline app::UpdateUserTitleDisplayNameRequest__Class** type_info = (app::UpdateUserTitleDisplayNameRequest__Class**)(modloader::win::memory::resolve_rva(0x047444A0));
        inline app::UpdateUserTitleDisplayNameRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserTitleDisplayNameRequest__Class>(type_info, "PlayFab.ClientModels", "UpdateUserTitleDisplayNameRequest");
        }
        inline app::UpdateUserTitleDisplayNameRequest* create() {
            return il2cpp::create_object<app::UpdateUserTitleDisplayNameRequest>(get_class());
        }
    } // namespace UpdateUserTitleDisplayNameRequest
} // namespace app::classes::types
