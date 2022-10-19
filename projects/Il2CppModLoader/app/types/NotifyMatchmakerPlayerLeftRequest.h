#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotifyMatchmakerPlayerLeftRequest {
        inline app::NotifyMatchmakerPlayerLeftRequest__Class** type_info = (app::NotifyMatchmakerPlayerLeftRequest__Class**)(modloader::win::memory::resolve_rva(0x0472BB08));
        inline app::NotifyMatchmakerPlayerLeftRequest__Class* get_class() {
            return il2cpp::get_class<app::NotifyMatchmakerPlayerLeftRequest__Class>(type_info, "PlayFab.ServerModels", "NotifyMatchmakerPlayerLeftRequest");
        }
        inline app::NotifyMatchmakerPlayerLeftRequest* create() {
            return il2cpp::create_object<app::NotifyMatchmakerPlayerLeftRequest>(get_class());
        }
    } // namespace NotifyMatchmakerPlayerLeftRequest
} // namespace app::classes::types
