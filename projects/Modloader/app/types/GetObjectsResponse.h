#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetObjectsResponse {
        inline app::GetObjectsResponse__Class** type_info = (app::GetObjectsResponse__Class**)(modloader::win::memory::resolve_rva(0x04713B90));
        inline app::GetObjectsResponse__Class* get_class() {
            return il2cpp::get_class<app::GetObjectsResponse__Class>(type_info, "PlayFab.DataModels", "GetObjectsResponse");
        }
        inline app::GetObjectsResponse* create() {
            return il2cpp::create_object<app::GetObjectsResponse>(get_class());
        }
    } // namespace GetObjectsResponse
} // namespace app::classes::types
