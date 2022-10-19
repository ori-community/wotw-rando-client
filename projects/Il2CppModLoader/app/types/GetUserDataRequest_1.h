#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetUserDataRequest_1 {
        inline app::GetUserDataRequest_1__Class** type_info = (app::GetUserDataRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0470F198));
        inline app::GetUserDataRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetUserDataRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetUserDataRequest");
        }
        inline app::GetUserDataRequest_1* create() {
            return il2cpp::create_object<app::GetUserDataRequest_1>(get_class());
        }
    } // namespace GetUserDataRequest_1
} // namespace app::classes::types
