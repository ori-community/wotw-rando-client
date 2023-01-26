#pragma once
#include <Modloader/app/structs/GetFilesRequest.h>
#include <Modloader/app/structs/GetFilesRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetFilesRequest {
        inline app::GetFilesRequest__Class** type_info() {
            static app::GetFilesRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetFilesRequest__Class**)(modloader::win::memory::resolve_rva(0x047603D0));
            }
            return cache;
        }
        inline app::GetFilesRequest__Class* get_class() {
            return il2cpp::get_class<app::GetFilesRequest__Class>(type_info(), "PlayFab.DataModels", "GetFilesRequest");
        }
        inline app::GetFilesRequest* create() {
            return il2cpp::create_object<app::GetFilesRequest>(get_class());
        }
    } // namespace GetFilesRequest
} // namespace app::classes::types
