#pragma once
#include <Modloader/app/structs/LinkPSNAccountRequest.h>
#include <Modloader/app/structs/LinkPSNAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkPSNAccountRequest {
        inline app::LinkPSNAccountRequest__Class** type_info() {
            static app::LinkPSNAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkPSNAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x047364C0));
            }
            return cache;
        }
        inline app::LinkPSNAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkPSNAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "LinkPSNAccountRequest");
        }
        inline app::LinkPSNAccountRequest* create() {
            return il2cpp::create_object<app::LinkPSNAccountRequest>(get_class());
        }
    } // namespace LinkPSNAccountRequest
} // namespace app::classes::types
