#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransactionStatus__Enum_1 {
        namespace {
            inline app::TransactionStatus__Enum_1__Class* type_info_ref = nullptr;
        }
        inline app::TransactionStatus__Enum_1__Class** type_info = &type_info_ref;
        inline app::TransactionStatus__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::TransactionStatus__Enum_1__Class>(type_info, "PlayFab.PlayStreamModels", "TransactionStatus");
        }
        inline app::TransactionStatus__Enum_1* create() {
            return il2cpp::create_object<app::TransactionStatus__Enum_1>(get_class());
        }
    } // namespace TransactionStatus__Enum_1
} // namespace app::classes::types
