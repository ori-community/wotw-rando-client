#pragma once
#include <Modloader/app/structs/GetTitleNewsRequest.h>
#include <Modloader/app/structs/GetTitleNewsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetTitleNewsRequest {
        inline app::GetTitleNewsRequest__Class** type_info() {
            static app::GetTitleNewsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetTitleNewsRequest__Class**)(modloader::win::memory::resolve_rva(0x04726BE8));
            }
            return cache;
        }
        inline app::GetTitleNewsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetTitleNewsRequest__Class>(type_info(), "PlayFab.ClientModels", "GetTitleNewsRequest");
        }
        inline app::GetTitleNewsRequest* create() {
            return il2cpp::create_object<app::GetTitleNewsRequest>(get_class());
        }
    } // namespace GetTitleNewsRequest
} // namespace app::classes::types
