#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConsumeItemRequest {
        inline app::ConsumeItemRequest__Class** type_info = (app::ConsumeItemRequest__Class**)(modloader::win::memory::resolve_rva(0x047412C8));
        inline app::ConsumeItemRequest__Class* get_class() {
            return il2cpp::get_class<app::ConsumeItemRequest__Class>(type_info, "PlayFab.ClientModels", "ConsumeItemRequest");
        }
        inline app::ConsumeItemRequest* create() {
            return il2cpp::create_object<app::ConsumeItemRequest>(get_class());
        }
    } // namespace ConsumeItemRequest
} // namespace app::classes::types
