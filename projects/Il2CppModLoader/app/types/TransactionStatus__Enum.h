#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransactionStatus__Enum {
        namespace {
            app::TransactionStatus__Enum__Class* type_info_ref = nullptr;
        }
        app::TransactionStatus__Enum__Class** type_info = &type_info_ref;
        inline app::TransactionStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::TransactionStatus__Enum__Class>(type_info, "PlayFab.ClientModels", "TransactionStatus");
        }
        inline app::TransactionStatus__Enum* create() {
            return il2cpp::create_object<app::TransactionStatus__Enum>(get_class());
        }
    } // namespace TransactionStatus__Enum
} // namespace app::classes::types
