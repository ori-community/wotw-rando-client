#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkCallbackManager_EventCallbackPackage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkCallbackManager_EventCallbackPackage__Class** type_info;
        inline app::AkCallbackManager_EventCallbackPackage__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCallbackManager_EventCallbackPackage__Class>(type_info, "", "AkCallbackManager", "EventCallbackPackage");
        }
        inline app::AkCallbackManager_EventCallbackPackage* create() {
            return il2cpp::create_object<app::AkCallbackManager_EventCallbackPackage>(get_class());
        }
        inline app::AkCallbackManager_EventCallbackPackage__Array* create_array(int size) {
            return il2cpp::array_new<app::AkCallbackManager_EventCallbackPackage__Array>(get_class(), size);
        }
    } // namespace AkCallbackManager_EventCallbackPackage
} // namespace app::classes::types
