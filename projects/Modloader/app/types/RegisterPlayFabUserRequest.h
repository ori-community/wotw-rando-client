#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegisterPlayFabUserRequest {
        inline app::RegisterPlayFabUserRequest__Class** type_info = (app::RegisterPlayFabUserRequest__Class**)(modloader::win::memory::resolve_rva(0x04721798));
        inline app::RegisterPlayFabUserRequest__Class* get_class() {
            return il2cpp::get_class<app::RegisterPlayFabUserRequest__Class>(type_info, "PlayFab.ClientModels", "RegisterPlayFabUserRequest");
        }
        inline app::RegisterPlayFabUserRequest* create() {
            return il2cpp::create_object<app::RegisterPlayFabUserRequest>(get_class());
        }
    } // namespace RegisterPlayFabUserRequest
} // namespace app::classes::types
