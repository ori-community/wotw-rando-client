#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeleteSharedGroupRequest {
        inline app::DeleteSharedGroupRequest__Class** type_info = (app::DeleteSharedGroupRequest__Class**)(modloader::win::memory::resolve_rva(0x047681D0));
        inline app::DeleteSharedGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteSharedGroupRequest__Class>(type_info, "PlayFab.ServerModels", "DeleteSharedGroupRequest");
        }
        inline app::DeleteSharedGroupRequest* create() {
            return il2cpp::create_object<app::DeleteSharedGroupRequest>(get_class());
        }
    } // namespace DeleteSharedGroupRequest
} // namespace app::classes::types
