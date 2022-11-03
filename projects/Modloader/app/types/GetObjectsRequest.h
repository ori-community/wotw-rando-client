#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetObjectsRequest {
        inline app::GetObjectsRequest__Class** type_info = (app::GetObjectsRequest__Class**)(modloader::win::memory::resolve_rva(0x04769CB0));
        inline app::GetObjectsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetObjectsRequest__Class>(type_info, "PlayFab.DataModels", "GetObjectsRequest");
        }
        inline app::GetObjectsRequest* create() {
            return il2cpp::create_object<app::GetObjectsRequest>(get_class());
        }
    } // namespace GetObjectsRequest
} // namespace app::classes::types
