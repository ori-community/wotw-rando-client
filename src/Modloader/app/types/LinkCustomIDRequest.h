#pragma once
#include <Modloader/app/structs/LinkCustomIDRequest.h>
#include <Modloader/app/structs/LinkCustomIDRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkCustomIDRequest {
        inline app::LinkCustomIDRequest__Class** type_info() {
            static app::LinkCustomIDRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkCustomIDRequest__Class**)(modloader::win::memory::resolve_rva(0x047391B0));
            }
            return cache;
        }
        inline app::LinkCustomIDRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkCustomIDRequest__Class>(type_info(), "PlayFab.ClientModels", "LinkCustomIDRequest");
        }
        inline app::LinkCustomIDRequest* create() {
            return il2cpp::create_object<app::LinkCustomIDRequest>(get_class());
        }
    } // namespace LinkCustomIDRequest
} // namespace app::classes::types
