#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetContentDownloadUrlRequest_1 {
        inline app::GetContentDownloadUrlRequest_1__Class** type_info = (app::GetContentDownloadUrlRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047894F0));
        inline app::GetContentDownloadUrlRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetContentDownloadUrlRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetContentDownloadUrlRequest");
        }
        inline app::GetContentDownloadUrlRequest_1* create() {
            return il2cpp::create_object<app::GetContentDownloadUrlRequest_1>(get_class());
        }
    } // namespace GetContentDownloadUrlRequest_1
} // namespace app::classes::types
