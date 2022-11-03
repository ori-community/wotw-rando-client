#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetObjectsRequest {
        inline app::SetObjectsRequest__Class** type_info = (app::SetObjectsRequest__Class**)(modloader::win::memory::resolve_rva(0x04743C88));
        inline app::SetObjectsRequest__Class* get_class() {
            return il2cpp::get_class<app::SetObjectsRequest__Class>(type_info, "PlayFab.DataModels", "SetObjectsRequest");
        }
        inline app::SetObjectsRequest* create() {
            return il2cpp::create_object<app::SetObjectsRequest>(get_class());
        }
    } // namespace SetObjectsRequest
} // namespace app::classes::types
