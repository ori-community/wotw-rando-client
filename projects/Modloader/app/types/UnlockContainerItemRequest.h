#pragma once
#include <Modloader/app/structs/UnlockContainerItemRequest.h>
#include <Modloader/app/structs/UnlockContainerItemRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlockContainerItemRequest {
        inline app::UnlockContainerItemRequest__Class** type_info() {
            static app::UnlockContainerItemRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlockContainerItemRequest__Class**)(modloader::win::memory::resolve_rva(0x04744C50));
            }
            return cache;
        }
        inline app::UnlockContainerItemRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlockContainerItemRequest__Class>(type_info(), "PlayFab.ClientModels", "UnlockContainerItemRequest");
        }
        inline app::UnlockContainerItemRequest* create() {
            return il2cpp::create_object<app::UnlockContainerItemRequest>(get_class());
        }
    } // namespace UnlockContainerItemRequest
} // namespace app::classes::types
