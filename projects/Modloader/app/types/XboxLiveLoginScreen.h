#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxLiveLoginScreen {
        inline app::XboxLiveLoginScreen__Class** type_info = (app::XboxLiveLoginScreen__Class**)(modloader::win::memory::resolve_rva(0x04768320));
        inline app::XboxLiveLoginScreen__Class* get_class() {
            return il2cpp::get_class<app::XboxLiveLoginScreen__Class>(type_info, "", "XboxLiveLoginScreen");
        }
        inline app::XboxLiveLoginScreen* create() {
            return il2cpp::create_object<app::XboxLiveLoginScreen>(get_class());
        }
    } // namespace XboxLiveLoginScreen
} // namespace app::classes::types
