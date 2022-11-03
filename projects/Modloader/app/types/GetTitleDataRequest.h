#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetTitleDataRequest {
        inline app::GetTitleDataRequest__Class** type_info = (app::GetTitleDataRequest__Class**)(modloader::win::memory::resolve_rva(0x0472E148));
        inline app::GetTitleDataRequest__Class* get_class() {
            return il2cpp::get_class<app::GetTitleDataRequest__Class>(type_info, "PlayFab.ClientModels", "GetTitleDataRequest");
        }
        inline app::GetTitleDataRequest* create() {
            return il2cpp::create_object<app::GetTitleDataRequest>(get_class());
        }
    } // namespace GetTitleDataRequest
} // namespace app::classes::types
