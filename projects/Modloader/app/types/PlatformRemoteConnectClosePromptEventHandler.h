#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlatformRemoteConnectClosePromptEventHandler__Class.h>
#include <Modloader/app/structs/PlatformRemoteConnectClosePromptEventHandler.h>

namespace app::classes::types {
    namespace PlatformRemoteConnectClosePromptEventHandler {
        inline app::PlatformRemoteConnectClosePromptEventHandler__Class** type_info = (app::PlatformRemoteConnectClosePromptEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0473F560));
        inline app::PlatformRemoteConnectClosePromptEventHandler__Class* get_class() {
            return il2cpp::get_class<app::PlatformRemoteConnectClosePromptEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "PlatformRemoteConnectClosePromptEventHandler");
        }
        inline app::PlatformRemoteConnectClosePromptEventHandler* create() {
            return il2cpp::create_object<app::PlatformRemoteConnectClosePromptEventHandler>(get_class());
        }
    } // namespace PlatformRemoteConnectClosePromptEventHandler
} // namespace app::classes::types
