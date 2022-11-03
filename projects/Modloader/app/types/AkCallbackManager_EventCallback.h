#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkCallbackManager_EventCallback {
        inline app::AkCallbackManager_EventCallback__Class** type_info = (app::AkCallbackManager_EventCallback__Class**)(modloader::win::memory::resolve_rva(0x04788988));
        inline app::AkCallbackManager_EventCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCallbackManager_EventCallback__Class>(type_info, "", "AkCallbackManager", "EventCallback");
        }
        inline app::AkCallbackManager_EventCallback* create() {
            return il2cpp::create_object<app::AkCallbackManager_EventCallback>(get_class());
        }
    } // namespace AkCallbackManager_EventCallback
} // namespace app::classes::types
