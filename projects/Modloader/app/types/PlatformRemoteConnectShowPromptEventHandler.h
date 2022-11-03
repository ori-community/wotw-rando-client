#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlatformRemoteConnectShowPromptEventHandler {
        inline app::PlatformRemoteConnectShowPromptEventHandler__Class** type_info = (app::PlatformRemoteConnectShowPromptEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04757628));
        inline app::PlatformRemoteConnectShowPromptEventHandler__Class* get_class() {
            return il2cpp::get_class<app::PlatformRemoteConnectShowPromptEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "PlatformRemoteConnectShowPromptEventHandler");
        }
        inline app::PlatformRemoteConnectShowPromptEventHandler* create() {
            return il2cpp::create_object<app::PlatformRemoteConnectShowPromptEventHandler>(get_class());
        }
    } // namespace PlatformRemoteConnectShowPromptEventHandler
} // namespace app::classes::types
