#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalService_XalPlatformRemoteConnectClosePromptEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalService_XalPlatformRemoteConnectClosePromptEventHandler__Class** type_info;
        inline app::XalService_XalPlatformRemoteConnectClosePromptEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalPlatformRemoteConnectClosePromptEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "XalPlatformRemoteConnectClosePromptEventHandler");
        }
        inline app::XalService_XalPlatformRemoteConnectClosePromptEventHandler* create() {
            return il2cpp::create_object<app::XalService_XalPlatformRemoteConnectClosePromptEventHandler>(get_class());
        }
    } // namespace XalService_XalPlatformRemoteConnectClosePromptEventHandler
} // namespace app::classes::types
