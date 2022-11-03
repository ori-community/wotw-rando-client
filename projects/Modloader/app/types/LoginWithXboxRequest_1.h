#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoginWithXboxRequest_1 {
        inline app::LoginWithXboxRequest_1__Class** type_info = (app::LoginWithXboxRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04701140));
        inline app::LoginWithXboxRequest_1__Class* get_class() {
            return il2cpp::get_class<app::LoginWithXboxRequest_1__Class>(type_info, "PlayFab.ServerModels", "LoginWithXboxRequest");
        }
        inline app::LoginWithXboxRequest_1* create() {
            return il2cpp::create_object<app::LoginWithXboxRequest_1>(get_class());
        }
    } // namespace LoginWithXboxRequest_1
} // namespace app::classes::types
