#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UpdateUserTitleDisplayNameRequest__Class.h>
#include <Modloader/app/structs/UpdateUserTitleDisplayNameRequest.h>

namespace app::classes::types {
    namespace UpdateUserTitleDisplayNameRequest {
        inline app::UpdateUserTitleDisplayNameRequest__Class** type_info = (app::UpdateUserTitleDisplayNameRequest__Class**)(modloader::win::memory::resolve_rva(0x047444A0));
        inline app::UpdateUserTitleDisplayNameRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserTitleDisplayNameRequest__Class>(type_info, "PlayFab.ClientModels", "UpdateUserTitleDisplayNameRequest");
        }
        inline app::UpdateUserTitleDisplayNameRequest* create() {
            return il2cpp::create_object<app::UpdateUserTitleDisplayNameRequest>(get_class());
        }
    } // namespace UpdateUserTitleDisplayNameRequest
} // namespace app::classes::types
