#pragma once
#include <Modloader/app/structs/GetUserBansRequest.h>
#include <Modloader/app/structs/GetUserBansRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetUserBansRequest {
        inline app::GetUserBansRequest__Class** type_info() {
            static app::GetUserBansRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetUserBansRequest__Class**)(modloader::win::memory::resolve_rva(0x04759230));
            }
            return cache;
        }
        inline app::GetUserBansRequest__Class* get_class() {
            return il2cpp::get_class<app::GetUserBansRequest__Class>(type_info(), "PlayFab.ServerModels", "GetUserBansRequest");
        }
        inline app::GetUserBansRequest* create() {
            return il2cpp::create_object<app::GetUserBansRequest>(get_class());
        }
    } // namespace GetUserBansRequest
} // namespace app::classes::types
