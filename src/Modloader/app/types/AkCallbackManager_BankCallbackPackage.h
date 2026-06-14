#pragma once
#include <Modloader/app/structs/AkCallbackManager_BankCallbackPackage.h>
#include <Modloader/app/structs/AkCallbackManager_BankCallbackPackage__Array.h>
#include <Modloader/app/structs/AkCallbackManager_BankCallbackPackage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCallbackManager_BankCallbackPackage {
        inline app::AkCallbackManager_BankCallbackPackage__Class** type_info() {
            static app::AkCallbackManager_BankCallbackPackage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkCallbackManager_BankCallbackPackage__Class**)(modloader::win::memory::resolve_rva(0x047630D0));
            }
            return cache;
        }
        inline app::AkCallbackManager_BankCallbackPackage__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCallbackManager_BankCallbackPackage__Class>(type_info(), "", "AkCallbackManager", "BankCallbackPackage");
        }
        inline app::AkCallbackManager_BankCallbackPackage* create() {
            return il2cpp::create_object<app::AkCallbackManager_BankCallbackPackage>(get_class());
        }
        inline app::AkCallbackManager_BankCallbackPackage__Array* create_array(int size) {
            return il2cpp::array_new<app::AkCallbackManager_BankCallbackPackage__Array>(get_class(), size);
        }
        inline app::AkCallbackManager_BankCallbackPackage__Array* create_array(const std::vector<app::AkCallbackManager_BankCallbackPackage*>& items) {
            return il2cpp::array_new<app::AkCallbackManager_BankCallbackPackage__Array>(get_class(), items);
        }
    } // namespace AkCallbackManager_BankCallbackPackage
} // namespace app::classes::types
