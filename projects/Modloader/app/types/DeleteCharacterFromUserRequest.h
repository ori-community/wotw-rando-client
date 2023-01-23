#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DeleteCharacterFromUserRequest__Class.h>
#include <Modloader/app/structs/DeleteCharacterFromUserRequest.h>

namespace app::classes::types {
    namespace DeleteCharacterFromUserRequest {
        inline app::DeleteCharacterFromUserRequest__Class** type_info = (app::DeleteCharacterFromUserRequest__Class**)(modloader::win::memory::resolve_rva(0x0471D850));
        inline app::DeleteCharacterFromUserRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteCharacterFromUserRequest__Class>(type_info, "PlayFab.ServerModels", "DeleteCharacterFromUserRequest");
        }
        inline app::DeleteCharacterFromUserRequest* create() {
            return il2cpp::create_object<app::DeleteCharacterFromUserRequest>(get_class());
        }
    } // namespace DeleteCharacterFromUserRequest
} // namespace app::classes::types
