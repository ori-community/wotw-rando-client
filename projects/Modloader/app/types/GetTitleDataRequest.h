#pragma once
#include <Modloader/app/structs/GetTitleDataRequest.h>
#include <Modloader/app/structs/GetTitleDataRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetTitleDataRequest {
        inline app::GetTitleDataRequest__Class** type_info() {
            static app::GetTitleDataRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetTitleDataRequest__Class**)(modloader::win::memory::resolve_rva(0x0472E148));
            }
            return cache;
        }
        inline app::GetTitleDataRequest__Class* get_class() {
            return il2cpp::get_class<app::GetTitleDataRequest__Class>(type_info(), "PlayFab.ClientModels", "GetTitleDataRequest");
        }
        inline app::GetTitleDataRequest* create() {
            return il2cpp::create_object<app::GetTitleDataRequest>(get_class());
        }
    } // namespace GetTitleDataRequest
} // namespace app::classes::types
