#pragma once
#include <Modloader/app/structs/WriteClientPlayerEventRequest.h>
#include <Modloader/app/structs/WriteClientPlayerEventRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WriteClientPlayerEventRequest {
        inline app::WriteClientPlayerEventRequest__Class** type_info() {
            static app::WriteClientPlayerEventRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WriteClientPlayerEventRequest__Class**)(modloader::win::memory::resolve_rva(0x04742CB0));
            }
            return cache;
        }
        inline app::WriteClientPlayerEventRequest__Class* get_class() {
            return il2cpp::get_class<app::WriteClientPlayerEventRequest__Class>(type_info(), "PlayFab.ClientModels", "WriteClientPlayerEventRequest");
        }
        inline app::WriteClientPlayerEventRequest* create() {
            return il2cpp::create_object<app::WriteClientPlayerEventRequest>(get_class());
        }
    } // namespace WriteClientPlayerEventRequest
} // namespace app::classes::types
