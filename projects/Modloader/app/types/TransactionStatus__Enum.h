#pragma once
#include <Modloader/app/structs/TransactionStatus__Enum.h>
#include <Modloader/app/structs/TransactionStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransactionStatus__Enum {
        inline app::TransactionStatus__Enum__Class** type_info() {
            static app::TransactionStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransactionStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransactionStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::TransactionStatus__Enum__Class>(type_info(), "PlayFab.ClientModels", "TransactionStatus");
        }
        inline app::TransactionStatus__Enum* create() {
            return il2cpp::create_object<app::TransactionStatus__Enum>(get_class());
        }
    } // namespace TransactionStatus__Enum
} // namespace app::classes::types
