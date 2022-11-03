#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetUserAccountInfoRequest {
        inline app::GetUserAccountInfoRequest__Class** type_info = (app::GetUserAccountInfoRequest__Class**)(modloader::win::memory::resolve_rva(0x04751948));
        inline app::GetUserAccountInfoRequest__Class* get_class() {
            return il2cpp::get_class<app::GetUserAccountInfoRequest__Class>(type_info, "PlayFab.ServerModels", "GetUserAccountInfoRequest");
        }
        inline app::GetUserAccountInfoRequest* create() {
            return il2cpp::create_object<app::GetUserAccountInfoRequest>(get_class());
        }
    } // namespace GetUserAccountInfoRequest
} // namespace app::classes::types
