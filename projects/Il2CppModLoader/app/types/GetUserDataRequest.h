#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetUserDataRequest {
        inline app::GetUserDataRequest__Class** type_info = (app::GetUserDataRequest__Class**)(modloader::win::memory::resolve_rva(0x0472ADE8));
        inline app::GetUserDataRequest__Class* get_class() {
            return il2cpp::get_class<app::GetUserDataRequest__Class>(type_info, "PlayFab.ClientModels", "GetUserDataRequest");
        }
        inline app::GetUserDataRequest* create() {
            return il2cpp::create_object<app::GetUserDataRequest>(get_class());
        }
    } // namespace GetUserDataRequest
} // namespace app::classes::types
