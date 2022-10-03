#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlatformRemoteConnectShowPromptEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlatformRemoteConnectShowPromptEventHandler__Class** type_info;
        inline app::PlatformRemoteConnectShowPromptEventHandler__Class* get_class() {
            return il2cpp::get_class<app::PlatformRemoteConnectShowPromptEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "PlatformRemoteConnectShowPromptEventHandler");
        }
        inline app::PlatformRemoteConnectShowPromptEventHandler* create() {
            return il2cpp::create_object<app::PlatformRemoteConnectShowPromptEventHandler>(get_class());
        }
    } // namespace PlatformRemoteConnectShowPromptEventHandler
} // namespace app::classes::types
