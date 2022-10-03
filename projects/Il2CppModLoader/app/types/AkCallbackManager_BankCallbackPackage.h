#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkCallbackManager_BankCallbackPackage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkCallbackManager_BankCallbackPackage__Class** type_info;
        inline app::AkCallbackManager_BankCallbackPackage__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCallbackManager_BankCallbackPackage__Class>(type_info, "", "AkCallbackManager", "BankCallbackPackage");
        }
        inline app::AkCallbackManager_BankCallbackPackage* create() {
            return il2cpp::create_object<app::AkCallbackManager_BankCallbackPackage>(get_class());
        }
        inline app::AkCallbackManager_BankCallbackPackage__Array* create_array(int size) {
            return il2cpp::array_new<app::AkCallbackManager_BankCallbackPackage__Array>(get_class(), size);
        }
    } // namespace AkCallbackManager_BankCallbackPackage
} // namespace app::classes::types
