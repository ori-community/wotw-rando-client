#pragma once
#include <Modloader/app/structs/GetContentDownloadUrlRequest.h>
#include <Modloader/app/structs/GetContentDownloadUrlRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetContentDownloadUrlRequest {
        inline app::GetContentDownloadUrlRequest__Class** type_info() {
            static app::GetContentDownloadUrlRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetContentDownloadUrlRequest__Class**)(modloader::win::memory::resolve_rva(0x04756838));
            }
            return cache;
        }
        inline app::GetContentDownloadUrlRequest__Class* get_class() {
            return il2cpp::get_class<app::GetContentDownloadUrlRequest__Class>(type_info(), "PlayFab.ClientModels", "GetContentDownloadUrlRequest");
        }
        inline app::GetContentDownloadUrlRequest* create() {
            return il2cpp::create_object<app::GetContentDownloadUrlRequest>(get_class());
        }
    } // namespace GetContentDownloadUrlRequest
} // namespace app::classes::types
