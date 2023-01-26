#pragma once
#include <Modloader/app/structs/WriteTitleEventRequest.h>
#include <Modloader/app/structs/WriteTitleEventRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WriteTitleEventRequest {
        inline app::WriteTitleEventRequest__Class** type_info() {
            static app::WriteTitleEventRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WriteTitleEventRequest__Class**)(modloader::win::memory::resolve_rva(0x04786428));
            }
            return cache;
        }
        inline app::WriteTitleEventRequest__Class* get_class() {
            return il2cpp::get_class<app::WriteTitleEventRequest__Class>(type_info(), "PlayFab.ClientModels", "WriteTitleEventRequest");
        }
        inline app::WriteTitleEventRequest* create() {
            return il2cpp::create_object<app::WriteTitleEventRequest>(get_class());
        }
    } // namespace WriteTitleEventRequest
} // namespace app::classes::types
