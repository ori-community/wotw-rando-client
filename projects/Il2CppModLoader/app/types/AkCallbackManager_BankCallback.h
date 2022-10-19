#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkCallbackManager_BankCallback {
        inline app::AkCallbackManager_BankCallback__Class** type_info = (app::AkCallbackManager_BankCallback__Class**)(modloader::win::memory::resolve_rva(0x047779A0));
        inline app::AkCallbackManager_BankCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCallbackManager_BankCallback__Class>(type_info, "", "AkCallbackManager", "BankCallback");
        }
        inline app::AkCallbackManager_BankCallback* create() {
            return il2cpp::create_object<app::AkCallbackManager_BankCallback>(get_class());
        }
    } // namespace AkCallbackManager_BankCallback
} // namespace app::classes::types
