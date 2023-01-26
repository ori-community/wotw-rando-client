#pragma once
#include <Modloader/app/structs/XalService_XalPlatformRemoteConnectClosePromptEventHandler.h>
#include <Modloader/app/structs/XalService_XalPlatformRemoteConnectClosePromptEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalService_XalPlatformRemoteConnectClosePromptEventHandler {
        inline app::XalService_XalPlatformRemoteConnectClosePromptEventHandler__Class** type_info() {
            static app::XalService_XalPlatformRemoteConnectClosePromptEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalService_XalPlatformRemoteConnectClosePromptEventHandler__Class**)(modloader::win::memory::resolve_rva(0x047123D8));
            }
            return cache;
        }
        inline app::XalService_XalPlatformRemoteConnectClosePromptEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalPlatformRemoteConnectClosePromptEventHandler__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalService", "XalPlatformRemoteConnectClosePromptEventHandler");
        }
        inline app::XalService_XalPlatformRemoteConnectClosePromptEventHandler* create() {
            return il2cpp::create_object<app::XalService_XalPlatformRemoteConnectClosePromptEventHandler>(get_class());
        }
    } // namespace XalService_XalPlatformRemoteConnectClosePromptEventHandler
} // namespace app::classes::types
