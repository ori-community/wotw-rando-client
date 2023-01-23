#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListUsersCharactersRequest__Class.h>
#include <Modloader/app/structs/ListUsersCharactersRequest.h>

namespace app::classes::types {
    namespace ListUsersCharactersRequest {
        inline app::ListUsersCharactersRequest__Class** type_info = (app::ListUsersCharactersRequest__Class**)(modloader::win::memory::resolve_rva(0x0477B688));
        inline app::ListUsersCharactersRequest__Class* get_class() {
            return il2cpp::get_class<app::ListUsersCharactersRequest__Class>(type_info, "PlayFab.ClientModels", "ListUsersCharactersRequest");
        }
        inline app::ListUsersCharactersRequest* create() {
            return il2cpp::create_object<app::ListUsersCharactersRequest>(get_class());
        }
    } // namespace ListUsersCharactersRequest
} // namespace app::classes::types
