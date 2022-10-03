#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkCallbackManager_EventCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkCallbackManager_EventCallback__Class** type_info;
        inline app::AkCallbackManager_EventCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCallbackManager_EventCallback__Class>(type_info, "", "AkCallbackManager", "EventCallback");
        }
        inline app::AkCallbackManager_EventCallback* create() {
            return il2cpp::create_object<app::AkCallbackManager_EventCallback>(get_class());
        }
    } // namespace AkCallbackManager_EventCallback
} // namespace app::classes::types
