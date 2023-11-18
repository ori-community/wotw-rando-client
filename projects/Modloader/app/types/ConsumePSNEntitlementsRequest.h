#pragma once
#include <Modloader/app/structs/ConsumePSNEntitlementsRequest.h>
#include <Modloader/app/structs/ConsumePSNEntitlementsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConsumePSNEntitlementsRequest {
        inline app::ConsumePSNEntitlementsRequest__Class** type_info() {
            static app::ConsumePSNEntitlementsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConsumePSNEntitlementsRequest__Class**)(modloader::win::memory::resolve_rva(0x04743CD0));
            }
            return cache;
        }
        inline app::ConsumePSNEntitlementsRequest__Class* get_class() {
            return il2cpp::get_class<app::ConsumePSNEntitlementsRequest__Class>(type_info(), "PlayFab.ClientModels", "ConsumePSNEntitlementsRequest");
        }
        inline app::ConsumePSNEntitlementsRequest* create() {
            return il2cpp::create_object<app::ConsumePSNEntitlementsRequest>(get_class());
        }
    } // namespace ConsumePSNEntitlementsRequest
} // namespace app::classes::types
