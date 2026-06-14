#pragma once
#include <Modloader/app/structs/AkBankManager_BankHandle__Array.h>
#include <Modloader/app/structs/AkBankManager_BankHandle__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkBankManager_BankHandle__Array {
        inline app::AkBankManager_BankHandle__Array__Class** type_info() {
            static app::AkBankManager_BankHandle__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkBankManager_BankHandle__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkBankManager_BankHandle__Array__Class* get_class() {
            return il2cpp::get_class<app::AkBankManager_BankHandle__Array__Class>(type_info(), "", "AkBankManager+BankHandle[]");
        }
        inline app::AkBankManager_BankHandle__Array* create() {
            return il2cpp::create_object<app::AkBankManager_BankHandle__Array>(get_class());
        }
    } // namespace AkBankManager_BankHandle__Array
} // namespace app::classes::types
