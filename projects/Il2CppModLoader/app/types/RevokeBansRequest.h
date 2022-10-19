#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RevokeBansRequest {
        inline app::RevokeBansRequest__Class** type_info = (app::RevokeBansRequest__Class**)(modloader::win::memory::resolve_rva(0x047393C8));
        inline app::RevokeBansRequest__Class* get_class() {
            return il2cpp::get_class<app::RevokeBansRequest__Class>(type_info, "PlayFab.ServerModels", "RevokeBansRequest");
        }
        inline app::RevokeBansRequest* create() {
            return il2cpp::create_object<app::RevokeBansRequest>(get_class());
        }
    } // namespace RevokeBansRequest
} // namespace app::classes::types
