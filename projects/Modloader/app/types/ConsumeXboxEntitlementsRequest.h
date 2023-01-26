#pragma once
#include <Modloader/app/structs/ConsumeXboxEntitlementsRequest.h>
#include <Modloader/app/structs/ConsumeXboxEntitlementsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConsumeXboxEntitlementsRequest {
        inline app::ConsumeXboxEntitlementsRequest__Class** type_info() {
            static app::ConsumeXboxEntitlementsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConsumeXboxEntitlementsRequest__Class**)(modloader::win::memory::resolve_rva(0x04773C70));
            }
            return cache;
        }
        inline app::ConsumeXboxEntitlementsRequest__Class* get_class() {
            return il2cpp::get_class<app::ConsumeXboxEntitlementsRequest__Class>(type_info(), "PlayFab.ClientModels", "ConsumeXboxEntitlementsRequest");
        }
        inline app::ConsumeXboxEntitlementsRequest* create() {
            return il2cpp::create_object<app::ConsumeXboxEntitlementsRequest>(get_class());
        }
    } // namespace ConsumeXboxEntitlementsRequest
} // namespace app::classes::types
