#pragma once
#include <Modloader/app/structs/GetContentDownloadUrlResult_1.h>
#include <Modloader/app/structs/GetContentDownloadUrlResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetContentDownloadUrlResult_1 {
        inline app::GetContentDownloadUrlResult_1__Class** type_info() {
            static app::GetContentDownloadUrlResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetContentDownloadUrlResult_1__Class**)(modloader::win::memory::resolve_rva(0x0479A1F8));
            }
            return cache;
        }
        inline app::GetContentDownloadUrlResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetContentDownloadUrlResult_1__Class>(type_info(), "PlayFab.ServerModels", "GetContentDownloadUrlResult");
        }
        inline app::GetContentDownloadUrlResult_1* create() {
            return il2cpp::create_object<app::GetContentDownloadUrlResult_1>(get_class());
        }
    } // namespace GetContentDownloadUrlResult_1
} // namespace app::classes::types
