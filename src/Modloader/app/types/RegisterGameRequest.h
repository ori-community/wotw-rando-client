#pragma once
#include <Modloader/app/structs/RegisterGameRequest.h>
#include <Modloader/app/structs/RegisterGameRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegisterGameRequest {
        inline app::RegisterGameRequest__Class** type_info() {
            static app::RegisterGameRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegisterGameRequest__Class**)(modloader::win::memory::resolve_rva(0x04767968));
            }
            return cache;
        }
        inline app::RegisterGameRequest__Class* get_class() {
            return il2cpp::get_class<app::RegisterGameRequest__Class>(type_info(), "PlayFab.ServerModels", "RegisterGameRequest");
        }
        inline app::RegisterGameRequest* create() {
            return il2cpp::create_object<app::RegisterGameRequest>(get_class());
        }
    } // namespace RegisterGameRequest
} // namespace app::classes::types
