#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetObjectsResponse {
        inline app::SetObjectsResponse__Class** type_info = (app::SetObjectsResponse__Class**)(modloader::win::memory::resolve_rva(0x04769EC8));
        inline app::SetObjectsResponse__Class* get_class() {
            return il2cpp::get_class<app::SetObjectsResponse__Class>(type_info, "PlayFab.DataModels", "SetObjectsResponse");
        }
        inline app::SetObjectsResponse* create() {
            return il2cpp::create_object<app::SetObjectsResponse>(get_class());
        }
    } // namespace SetObjectsResponse
} // namespace app::classes::types
