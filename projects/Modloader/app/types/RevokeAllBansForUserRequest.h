#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RevokeAllBansForUserRequest__Class.h>
#include <Modloader/app/structs/RevokeAllBansForUserRequest.h>

namespace app::classes::types {
    namespace RevokeAllBansForUserRequest {
        inline app::RevokeAllBansForUserRequest__Class** type_info = (app::RevokeAllBansForUserRequest__Class**)(modloader::win::memory::resolve_rva(0x04771CE8));
        inline app::RevokeAllBansForUserRequest__Class* get_class() {
            return il2cpp::get_class<app::RevokeAllBansForUserRequest__Class>(type_info, "PlayFab.ServerModels", "RevokeAllBansForUserRequest");
        }
        inline app::RevokeAllBansForUserRequest* create() {
            return il2cpp::create_object<app::RevokeAllBansForUserRequest>(get_class());
        }
    } // namespace RevokeAllBansForUserRequest
} // namespace app::classes::types
