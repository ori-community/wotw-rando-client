#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeleteGroupRequest {
        inline app::DeleteGroupRequest__Class** type_info = (app::DeleteGroupRequest__Class**)(modloader::win::memory::resolve_rva(0x04762210));
        inline app::DeleteGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteGroupRequest__Class>(type_info, "PlayFab.GroupsModels", "DeleteGroupRequest");
        }
        inline app::DeleteGroupRequest* create() {
            return il2cpp::create_object<app::DeleteGroupRequest>(get_class());
        }
    } // namespace DeleteGroupRequest
} // namespace app::classes::types
