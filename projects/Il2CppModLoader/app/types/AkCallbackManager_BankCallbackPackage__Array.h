#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkCallbackManager_BankCallbackPackage__Array {
        namespace {
            app::AkCallbackManager_BankCallbackPackage__Array__Class* type_info_ref = nullptr;
        }
        app::AkCallbackManager_BankCallbackPackage__Array__Class** type_info = &type_info_ref;
        inline app::AkCallbackManager_BankCallbackPackage__Array__Class* get_class() {
            return il2cpp::get_class<app::AkCallbackManager_BankCallbackPackage__Array__Class>(type_info, "", "AkCallbackManager+BankCallbackPackage[]");
        }
        inline app::AkCallbackManager_BankCallbackPackage__Array* create() {
            return il2cpp::create_object<app::AkCallbackManager_BankCallbackPackage__Array>(get_class());
        }
    } // namespace AkCallbackManager_BankCallbackPackage__Array
} // namespace app::classes::types
