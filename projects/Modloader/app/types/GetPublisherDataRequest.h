#pragma once
#include <Modloader/app/structs/GetPublisherDataRequest.h>
#include <Modloader/app/structs/GetPublisherDataRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPublisherDataRequest {
        inline app::GetPublisherDataRequest__Class** type_info() {
            static app::GetPublisherDataRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPublisherDataRequest__Class**)(modloader::win::memory::resolve_rva(0x0472D188));
            }
            return cache;
        }
        inline app::GetPublisherDataRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPublisherDataRequest__Class>(type_info(), "PlayFab.ClientModels", "GetPublisherDataRequest");
        }
        inline app::GetPublisherDataRequest* create() {
            return il2cpp::create_object<app::GetPublisherDataRequest>(get_class());
        }
    } // namespace GetPublisherDataRequest
} // namespace app::classes::types
