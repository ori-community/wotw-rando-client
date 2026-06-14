#pragma once
#include <Modloader/app/structs/WriteServerPlayerEventRequest.h>
#include <Modloader/app/structs/WriteServerPlayerEventRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WriteServerPlayerEventRequest {
        inline app::WriteServerPlayerEventRequest__Class** type_info() {
            static app::WriteServerPlayerEventRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WriteServerPlayerEventRequest__Class**)(modloader::win::memory::resolve_rva(0x0473FF80));
            }
            return cache;
        }
        inline app::WriteServerPlayerEventRequest__Class* get_class() {
            return il2cpp::get_class<app::WriteServerPlayerEventRequest__Class>(type_info(), "PlayFab.ServerModels", "WriteServerPlayerEventRequest");
        }
        inline app::WriteServerPlayerEventRequest* create() {
            return il2cpp::create_object<app::WriteServerPlayerEventRequest>(get_class());
        }
    } // namespace WriteServerPlayerEventRequest
} // namespace app::classes::types
