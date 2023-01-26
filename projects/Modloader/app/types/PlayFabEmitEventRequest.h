#pragma once
#include <Modloader/app/structs/PlayFabEmitEventRequest.h>
#include <Modloader/app/structs/PlayFabEmitEventRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabEmitEventRequest {
        inline app::PlayFabEmitEventRequest__Class** type_info() {
            static app::PlayFabEmitEventRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabEmitEventRequest__Class**)(modloader::win::memory::resolve_rva(0x04703948));
            }
            return cache;
        }
        inline app::PlayFabEmitEventRequest__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEmitEventRequest__Class>(type_info(), "PlayFab", "PlayFabEmitEventRequest");
        }
        inline app::PlayFabEmitEventRequest* create() {
            return il2cpp::create_object<app::PlayFabEmitEventRequest>(get_class());
        }
    } // namespace PlayFabEmitEventRequest
} // namespace app::classes::types
