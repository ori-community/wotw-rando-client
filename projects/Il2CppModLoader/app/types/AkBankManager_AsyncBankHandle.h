#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkBankManager_AsyncBankHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkBankManager_AsyncBankHandle__Class** type_info;
        inline app::AkBankManager_AsyncBankHandle__Class* get_class() {
            return il2cpp::get_nested_class<app::AkBankManager_AsyncBankHandle__Class>(type_info, "", "AkBankManager", "AsyncBankHandle");
        }
        inline app::AkBankManager_AsyncBankHandle* create() {
            return il2cpp::create_object<app::AkBankManager_AsyncBankHandle>(get_class());
        }
    } // namespace AkBankManager_AsyncBankHandle
} // namespace app::classes::types
