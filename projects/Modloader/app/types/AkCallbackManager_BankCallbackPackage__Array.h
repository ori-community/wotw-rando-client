#pragma once
#include <Modloader/app/structs/AkCallbackManager_BankCallbackPackage__Array.h>
#include <Modloader/app/structs/AkCallbackManager_BankCallbackPackage__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCallbackManager_BankCallbackPackage__Array {
        inline app::AkCallbackManager_BankCallbackPackage__Array__Class** type_info() {
            static app::AkCallbackManager_BankCallbackPackage__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkCallbackManager_BankCallbackPackage__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkCallbackManager_BankCallbackPackage__Array__Class* get_class() {
            return il2cpp::get_class<app::AkCallbackManager_BankCallbackPackage__Array__Class>(type_info(), "", "AkCallbackManager+BankCallbackPackage[]");
        }
        inline app::AkCallbackManager_BankCallbackPackage__Array* create() {
            return il2cpp::create_object<app::AkCallbackManager_BankCallbackPackage__Array>(get_class());
        }
    } // namespace AkCallbackManager_BankCallbackPackage__Array
} // namespace app::classes::types
