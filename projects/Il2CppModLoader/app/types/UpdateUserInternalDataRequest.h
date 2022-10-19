#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateUserInternalDataRequest {
        inline app::UpdateUserInternalDataRequest__Class** type_info = (app::UpdateUserInternalDataRequest__Class**)(modloader::win::memory::resolve_rva(0x0470B5E0));
        inline app::UpdateUserInternalDataRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserInternalDataRequest__Class>(type_info, "PlayFab.ServerModels", "UpdateUserInternalDataRequest");
        }
        inline app::UpdateUserInternalDataRequest* create() {
            return il2cpp::create_object<app::UpdateUserInternalDataRequest>(get_class());
        }
    } // namespace UpdateUserInternalDataRequest
} // namespace app::classes::types
