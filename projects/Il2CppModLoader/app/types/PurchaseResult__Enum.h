#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PurchaseResult__Enum {
        namespace {
            inline app::PurchaseResult__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PurchaseResult__Enum__Class** type_info = &type_info_ref;
        inline app::PurchaseResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::PurchaseResult__Enum__Class>(type_info, "", "PurchaseResult");
        }
        inline app::PurchaseResult__Enum* create() {
            return il2cpp::create_object<app::PurchaseResult__Enum>(get_class());
        }
    } // namespace PurchaseResult__Enum
} // namespace app::classes::types
