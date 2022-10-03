#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkCallbackManager_BGMCallbackPackage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkCallbackManager_BGMCallbackPackage__Class** type_info;
        inline app::AkCallbackManager_BGMCallbackPackage__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCallbackManager_BGMCallbackPackage__Class>(type_info, "", "AkCallbackManager", "BGMCallbackPackage");
        }
        inline app::AkCallbackManager_BGMCallbackPackage* create() {
            return il2cpp::create_object<app::AkCallbackManager_BGMCallbackPackage>(get_class());
        }
    } // namespace AkCallbackManager_BGMCallbackPackage
} // namespace app::classes::types
