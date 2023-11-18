#pragma once
#include <Modloader/app/structs/GetObjectsResponse.h>
#include <Modloader/app/structs/GetObjectsResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetObjectsResponse {
        inline app::GetObjectsResponse__Class** type_info() {
            static app::GetObjectsResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetObjectsResponse__Class**)(modloader::win::memory::resolve_rva(0x04713B90));
            }
            return cache;
        }
        inline app::GetObjectsResponse__Class* get_class() {
            return il2cpp::get_class<app::GetObjectsResponse__Class>(type_info(), "PlayFab.DataModels", "GetObjectsResponse");
        }
        inline app::GetObjectsResponse* create() {
            return il2cpp::create_object<app::GetObjectsResponse>(get_class());
        }
    } // namespace GetObjectsResponse
} // namespace app::classes::types
