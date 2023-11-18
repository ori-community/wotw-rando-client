#pragma once
#include <Modloader/app/structs/AddPlayerTagRequest.h>
#include <Modloader/app/structs/AddPlayerTagRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddPlayerTagRequest {
        inline app::AddPlayerTagRequest__Class** type_info() {
            static app::AddPlayerTagRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddPlayerTagRequest__Class**)(modloader::win::memory::resolve_rva(0x04720020));
            }
            return cache;
        }
        inline app::AddPlayerTagRequest__Class* get_class() {
            return il2cpp::get_class<app::AddPlayerTagRequest__Class>(type_info(), "PlayFab.ServerModels", "AddPlayerTagRequest");
        }
        inline app::AddPlayerTagRequest* create() {
            return il2cpp::create_object<app::AddPlayerTagRequest>(get_class());
        }
    } // namespace AddPlayerTagRequest
} // namespace app::classes::types
