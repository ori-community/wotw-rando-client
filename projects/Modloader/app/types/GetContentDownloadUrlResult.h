#pragma once
#include <Modloader/app/structs/GetContentDownloadUrlResult.h>
#include <Modloader/app/structs/GetContentDownloadUrlResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetContentDownloadUrlResult {
        inline app::GetContentDownloadUrlResult__Class** type_info() {
            static app::GetContentDownloadUrlResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetContentDownloadUrlResult__Class**)(modloader::win::memory::resolve_rva(0x0470C348));
            }
            return cache;
        }
        inline app::GetContentDownloadUrlResult__Class* get_class() {
            return il2cpp::get_class<app::GetContentDownloadUrlResult__Class>(type_info(), "PlayFab.ClientModels", "GetContentDownloadUrlResult");
        }
        inline app::GetContentDownloadUrlResult* create() {
            return il2cpp::create_object<app::GetContentDownloadUrlResult>(get_class());
        }
    } // namespace GetContentDownloadUrlResult
} // namespace app::classes::types
