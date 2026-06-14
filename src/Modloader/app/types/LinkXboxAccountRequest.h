#pragma once
#include <Modloader/app/structs/LinkXboxAccountRequest.h>
#include <Modloader/app/structs/LinkXboxAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkXboxAccountRequest {
        inline app::LinkXboxAccountRequest__Class** type_info() {
            static app::LinkXboxAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkXboxAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x047020B0));
            }
            return cache;
        }
        inline app::LinkXboxAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkXboxAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "LinkXboxAccountRequest");
        }
        inline app::LinkXboxAccountRequest* create() {
            return il2cpp::create_object<app::LinkXboxAccountRequest>(get_class());
        }
    } // namespace LinkXboxAccountRequest
} // namespace app::classes::types
