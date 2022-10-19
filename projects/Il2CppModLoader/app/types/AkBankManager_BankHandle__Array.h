#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkBankManager_BankHandle__Array {
        namespace {
            inline app::AkBankManager_BankHandle__Array__Class* type_info_ref = nullptr;
        }
        inline app::AkBankManager_BankHandle__Array__Class** type_info = &type_info_ref;
        inline app::AkBankManager_BankHandle__Array__Class* get_class() {
            return il2cpp::get_class<app::AkBankManager_BankHandle__Array__Class>(type_info, "", "AkBankManager+BankHandle[]");
        }
        inline app::AkBankManager_BankHandle__Array* create() {
            return il2cpp::create_object<app::AkBankManager_BankHandle__Array>(get_class());
        }
    } // namespace AkBankManager_BankHandle__Array
} // namespace app::classes::types
