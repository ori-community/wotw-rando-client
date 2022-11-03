#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreateSharedGroupRequest {
        inline app::CreateSharedGroupRequest__Class** type_info = (app::CreateSharedGroupRequest__Class**)(modloader::win::memory::resolve_rva(0x0476DDF8));
        inline app::CreateSharedGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateSharedGroupRequest__Class>(type_info, "PlayFab.ClientModels", "CreateSharedGroupRequest");
        }
        inline app::CreateSharedGroupRequest* create() {
            return il2cpp::create_object<app::CreateSharedGroupRequest>(get_class());
        }
    } // namespace CreateSharedGroupRequest
} // namespace app::classes::types
