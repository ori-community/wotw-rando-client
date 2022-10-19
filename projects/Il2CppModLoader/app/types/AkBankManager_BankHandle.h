#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkBankManager_BankHandle {
        inline app::AkBankManager_BankHandle__Class** type_info = (app::AkBankManager_BankHandle__Class**)(modloader::win::memory::resolve_rva(0x04740C20));
        inline app::AkBankManager_BankHandle__Class* get_class() {
            return il2cpp::get_nested_class<app::AkBankManager_BankHandle__Class>(type_info, "", "AkBankManager", "BankHandle");
        }
        inline app::AkBankManager_BankHandle* create() {
            return il2cpp::create_object<app::AkBankManager_BankHandle>(get_class());
        }
        inline app::AkBankManager_BankHandle__Array* create_array(int size) {
            return il2cpp::array_new<app::AkBankManager_BankHandle__Array>(get_class(), size);
        }
        inline app::AkBankManager_BankHandle__Array* create_array(const std::vector<app::AkBankManager_BankHandle*>& items) {
            return il2cpp::array_new<app::AkBankManager_BankHandle__Array>(get_class(), items);
        }
    } // namespace AkBankManager_BankHandle
} // namespace app::classes::types
