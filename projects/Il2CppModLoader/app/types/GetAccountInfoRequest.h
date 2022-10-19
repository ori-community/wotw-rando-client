#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetAccountInfoRequest {
        inline app::GetAccountInfoRequest__Class** type_info = (app::GetAccountInfoRequest__Class**)(modloader::win::memory::resolve_rva(0x04733560));
        inline app::GetAccountInfoRequest__Class* get_class() {
            return il2cpp::get_class<app::GetAccountInfoRequest__Class>(type_info, "PlayFab.ClientModels", "GetAccountInfoRequest");
        }
        inline app::GetAccountInfoRequest* create() {
            return il2cpp::create_object<app::GetAccountInfoRequest>(get_class());
        }
    } // namespace GetAccountInfoRequest
} // namespace app::classes::types
