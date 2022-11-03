#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreateGroupRequest {
        inline app::CreateGroupRequest__Class** type_info = (app::CreateGroupRequest__Class**)(modloader::win::memory::resolve_rva(0x0471DEC0));
        inline app::CreateGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateGroupRequest__Class>(type_info, "PlayFab.GroupsModels", "CreateGroupRequest");
        }
        inline app::CreateGroupRequest* create() {
            return il2cpp::create_object<app::CreateGroupRequest>(get_class());
        }
    } // namespace CreateGroupRequest
} // namespace app::classes::types
