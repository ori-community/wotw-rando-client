#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConsumeXboxEntitlementsRequest__Class.h>
#include <Modloader/app/structs/ConsumeXboxEntitlementsRequest.h>

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
