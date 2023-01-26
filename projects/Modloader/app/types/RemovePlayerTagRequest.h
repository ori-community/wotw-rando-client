#pragma once
#include <Modloader/app/structs/RemovePlayerTagRequest.h>
#include <Modloader/app/structs/RemovePlayerTagRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemovePlayerTagRequest {
        inline app::RemovePlayerTagRequest__Class** type_info() {
            static app::RemovePlayerTagRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemovePlayerTagRequest__Class**)(modloader::win::memory::resolve_rva(0x04746A50));
            }
            return cache;
        }
        inline app::RemovePlayerTagRequest__Class* get_class() {
            return il2cpp::get_class<app::RemovePlayerTagRequest__Class>(type_info(), "PlayFab.ServerModels", "RemovePlayerTagRequest");
        }
        inline app::RemovePlayerTagRequest* create() {
            return il2cpp::create_object<app::RemovePlayerTagRequest>(get_class());
        }
    } // namespace RemovePlayerTagRequest
} // namespace app::classes::types
