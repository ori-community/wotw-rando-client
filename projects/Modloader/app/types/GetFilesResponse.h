#pragma once
#include <Modloader/app/structs/GetFilesResponse.h>
#include <Modloader/app/structs/GetFilesResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetFilesResponse {
        inline app::GetFilesResponse__Class** type_info() {
            static app::GetFilesResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetFilesResponse__Class**)(modloader::win::memory::resolve_rva(0x0472D298));
            }
            return cache;
        }
        inline app::GetFilesResponse__Class* get_class() {
            return il2cpp::get_class<app::GetFilesResponse__Class>(type_info(), "PlayFab.DataModels", "GetFilesResponse");
        }
        inline app::GetFilesResponse* create() {
            return il2cpp::create_object<app::GetFilesResponse>(get_class());
        }
    } // namespace GetFilesResponse
} // namespace app::classes::types
