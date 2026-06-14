#pragma once
#include <Modloader/app/structs/RegisterPlayFabUserRequest.h>
#include <Modloader/app/structs/RegisterPlayFabUserRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegisterPlayFabUserRequest {
        inline app::RegisterPlayFabUserRequest__Class** type_info() {
            static app::RegisterPlayFabUserRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegisterPlayFabUserRequest__Class**)(modloader::win::memory::resolve_rva(0x04721798));
            }
            return cache;
        }
        inline app::RegisterPlayFabUserRequest__Class* get_class() {
            return il2cpp::get_class<app::RegisterPlayFabUserRequest__Class>(type_info(), "PlayFab.ClientModels", "RegisterPlayFabUserRequest");
        }
        inline app::RegisterPlayFabUserRequest* create() {
            return il2cpp::create_object<app::RegisterPlayFabUserRequest>(get_class());
        }
    } // namespace RegisterPlayFabUserRequest
} // namespace app::classes::types
