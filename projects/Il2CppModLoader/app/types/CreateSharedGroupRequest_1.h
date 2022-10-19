#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreateSharedGroupRequest_1 {
        inline app::CreateSharedGroupRequest_1__Class** type_info = (app::CreateSharedGroupRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047843D0));
        inline app::CreateSharedGroupRequest_1__Class* get_class() {
            return il2cpp::get_class<app::CreateSharedGroupRequest_1__Class>(type_info, "PlayFab.ServerModels", "CreateSharedGroupRequest");
        }
        inline app::CreateSharedGroupRequest_1* create() {
            return il2cpp::create_object<app::CreateSharedGroupRequest_1>(get_class());
        }
    } // namespace CreateSharedGroupRequest_1
} // namespace app::classes::types
