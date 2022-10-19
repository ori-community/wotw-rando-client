#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConsumeXboxEntitlementsRequest {
        inline app::ConsumeXboxEntitlementsRequest__Class** type_info = (app::ConsumeXboxEntitlementsRequest__Class**)(modloader::win::memory::resolve_rva(0x04773C70));
        inline app::ConsumeXboxEntitlementsRequest__Class* get_class() {
            return il2cpp::get_class<app::ConsumeXboxEntitlementsRequest__Class>(type_info, "PlayFab.ClientModels", "ConsumeXboxEntitlementsRequest");
        }
        inline app::ConsumeXboxEntitlementsRequest* create() {
            return il2cpp::create_object<app::ConsumeXboxEntitlementsRequest>(get_class());
        }
    } // namespace ConsumeXboxEntitlementsRequest
} // namespace app::classes::types
