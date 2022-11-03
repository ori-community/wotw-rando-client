#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkKongregateAccountRequest {
        inline app::UnlinkKongregateAccountRequest__Class** type_info = (app::UnlinkKongregateAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x0474B6C0));
        inline app::UnlinkKongregateAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkKongregateAccountRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkKongregateAccountRequest");
        }
        inline app::UnlinkKongregateAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkKongregateAccountRequest>(get_class());
        }
    } // namespace UnlinkKongregateAccountRequest
} // namespace app::classes::types
