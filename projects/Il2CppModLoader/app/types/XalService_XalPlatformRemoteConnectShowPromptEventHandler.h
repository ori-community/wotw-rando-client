#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalService_XalPlatformRemoteConnectShowPromptEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalService_XalPlatformRemoteConnectShowPromptEventHandler__Class** type_info;
        inline app::XalService_XalPlatformRemoteConnectShowPromptEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalPlatformRemoteConnectShowPromptEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "XalPlatformRemoteConnectShowPromptEventHandler");
        }
        inline app::XalService_XalPlatformRemoteConnectShowPromptEventHandler* create() {
            return il2cpp::create_object<app::XalService_XalPlatformRemoteConnectShowPromptEventHandler>(get_class());
        }
    } // namespace XalService_XalPlatformRemoteConnectShowPromptEventHandler
} // namespace app::classes::types
