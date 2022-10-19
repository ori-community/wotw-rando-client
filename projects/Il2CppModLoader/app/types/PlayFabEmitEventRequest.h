#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabEmitEventRequest {
        inline app::PlayFabEmitEventRequest__Class** type_info = (app::PlayFabEmitEventRequest__Class**)(modloader::win::memory::resolve_rva(0x04703948));
        inline app::PlayFabEmitEventRequest__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEmitEventRequest__Class>(type_info, "PlayFab", "PlayFabEmitEventRequest");
        }
        inline app::PlayFabEmitEventRequest* create() {
            return il2cpp::create_object<app::PlayFabEmitEventRequest>(get_class());
        }
    } // namespace PlayFabEmitEventRequest
} // namespace app::classes::types
