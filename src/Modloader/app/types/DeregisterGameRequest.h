#pragma once
#include <Modloader/app/structs/DeregisterGameRequest.h>
#include <Modloader/app/structs/DeregisterGameRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeregisterGameRequest {
        inline app::DeregisterGameRequest__Class** type_info() {
            static app::DeregisterGameRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeregisterGameRequest__Class**)(modloader::win::memory::resolve_rva(0x0477AC08));
            }
            return cache;
        }
        inline app::DeregisterGameRequest__Class* get_class() {
            return il2cpp::get_class<app::DeregisterGameRequest__Class>(type_info(), "PlayFab.ServerModels", "DeregisterGameRequest");
        }
        inline app::DeregisterGameRequest* create() {
            return il2cpp::create_object<app::DeregisterGameRequest>(get_class());
        }
    } // namespace DeregisterGameRequest
} // namespace app::classes::types
