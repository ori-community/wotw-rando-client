#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkCallbackManager_InitializationSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkCallbackManager_InitializationSettings__Class** type_info;
        inline app::AkCallbackManager_InitializationSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCallbackManager_InitializationSettings__Class>(type_info, "", "AkCallbackManager", "InitializationSettings");
        }
        inline app::AkCallbackManager_InitializationSettings* create() {
            return il2cpp::create_object<app::AkCallbackManager_InitializationSettings>(get_class());
        }
    } // namespace AkCallbackManager_InitializationSettings
} // namespace app::classes::types
