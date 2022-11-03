#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkCallbackManager_InitializationSettings {
        inline app::AkCallbackManager_InitializationSettings__Class** type_info = (app::AkCallbackManager_InitializationSettings__Class**)(modloader::win::memory::resolve_rva(0x04781BC0));
        inline app::AkCallbackManager_InitializationSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCallbackManager_InitializationSettings__Class>(type_info, "", "AkCallbackManager", "InitializationSettings");
        }
        inline app::AkCallbackManager_InitializationSettings* create() {
            return il2cpp::create_object<app::AkCallbackManager_InitializationSettings>(get_class());
        }
    } // namespace AkCallbackManager_InitializationSettings
} // namespace app::classes::types
