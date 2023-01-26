#pragma once
#include <Modloader/app/structs/PlatformRemoteConnectShowPromptEventHandler.h>
#include <Modloader/app/structs/PlatformRemoteConnectShowPromptEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformRemoteConnectShowPromptEventHandler {
        inline app::PlatformRemoteConnectShowPromptEventHandler__Class** type_info() {
            static app::PlatformRemoteConnectShowPromptEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlatformRemoteConnectShowPromptEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04757628));
            }
            return cache;
        }
        inline app::PlatformRemoteConnectShowPromptEventHandler__Class* get_class() {
            return il2cpp::get_class<app::PlatformRemoteConnectShowPromptEventHandler__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "PlatformRemoteConnectShowPromptEventHandler");
        }
        inline app::PlatformRemoteConnectShowPromptEventHandler* create() {
            return il2cpp::create_object<app::PlatformRemoteConnectShowPromptEventHandler>(get_class());
        }
    } // namespace PlatformRemoteConnectShowPromptEventHandler
} // namespace app::classes::types
