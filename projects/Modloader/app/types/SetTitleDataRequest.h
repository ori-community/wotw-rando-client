#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetTitleDataRequest__Class.h>
#include <Modloader/app/structs/SetTitleDataRequest.h>

namespace app::classes::types {
    namespace SetTitleDataRequest {
        inline app::SetTitleDataRequest__Class** type_info = (app::SetTitleDataRequest__Class**)(modloader::win::memory::resolve_rva(0x0473BD18));
        inline app::SetTitleDataRequest__Class* get_class() {
            return il2cpp::get_class<app::SetTitleDataRequest__Class>(type_info, "PlayFab.ServerModels", "SetTitleDataRequest");
        }
        inline app::SetTitleDataRequest* create() {
            return il2cpp::create_object<app::SetTitleDataRequest>(get_class());
        }
    } // namespace SetTitleDataRequest
} // namespace app::classes::types
