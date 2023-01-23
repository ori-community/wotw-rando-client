#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetUserBansRequest__Class.h>
#include <Modloader/app/structs/GetUserBansRequest.h>

namespace app::classes::types {
    namespace GetUserBansRequest {
        inline app::GetUserBansRequest__Class** type_info = (app::GetUserBansRequest__Class**)(modloader::win::memory::resolve_rva(0x04759230));
        inline app::GetUserBansRequest__Class* get_class() {
            return il2cpp::get_class<app::GetUserBansRequest__Class>(type_info, "PlayFab.ServerModels", "GetUserBansRequest");
        }
        inline app::GetUserBansRequest* create() {
            return il2cpp::create_object<app::GetUserBansRequest>(get_class());
        }
    } // namespace GetUserBansRequest
} // namespace app::classes::types
