#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StartGameRequest {
        inline app::StartGameRequest__Class** type_info = (app::StartGameRequest__Class**)(modloader::win::memory::resolve_rva(0x047089D8));
        inline app::StartGameRequest__Class* get_class() {
            return il2cpp::get_class<app::StartGameRequest__Class>(type_info, "PlayFab.ClientModels", "StartGameRequest");
        }
        inline app::StartGameRequest* create() {
            return il2cpp::create_object<app::StartGameRequest>(get_class());
        }
    } // namespace StartGameRequest
} // namespace app::classes::types
