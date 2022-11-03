#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WriteTitleEventRequest {
        inline app::WriteTitleEventRequest__Class** type_info = (app::WriteTitleEventRequest__Class**)(modloader::win::memory::resolve_rva(0x04786428));
        inline app::WriteTitleEventRequest__Class* get_class() {
            return il2cpp::get_class<app::WriteTitleEventRequest__Class>(type_info, "PlayFab.ClientModels", "WriteTitleEventRequest");
        }
        inline app::WriteTitleEventRequest* create() {
            return il2cpp::create_object<app::WriteTitleEventRequest>(get_class());
        }
    } // namespace WriteTitleEventRequest
} // namespace app::classes::types
