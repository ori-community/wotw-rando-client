#pragma once
#include <Modloader/app/structs/AddUsernamePasswordRequest.h>
#include <Modloader/app/structs/AddUsernamePasswordRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddUsernamePasswordRequest {
        inline app::AddUsernamePasswordRequest__Class** type_info() {
            static app::AddUsernamePasswordRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddUsernamePasswordRequest__Class**)(modloader::win::memory::resolve_rva(0x04754028));
            }
            return cache;
        }
        inline app::AddUsernamePasswordRequest__Class* get_class() {
            return il2cpp::get_class<app::AddUsernamePasswordRequest__Class>(type_info(), "PlayFab.ClientModels", "AddUsernamePasswordRequest");
        }
        inline app::AddUsernamePasswordRequest* create() {
            return il2cpp::create_object<app::AddUsernamePasswordRequest>(get_class());
        }
    } // namespace AddUsernamePasswordRequest
} // namespace app::classes::types
