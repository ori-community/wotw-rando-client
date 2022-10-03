#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EComparison__Enum {
        namespace {
            app::EComparison__Enum__Class* type_info_ref = nullptr;
        }
        app::EComparison__Enum__Class** type_info = &type_info_ref;
        inline app::EComparison__Enum__Class* get_class() {
            return il2cpp::get_class<app::EComparison__Enum__Class>(type_info, "System.Data.SqlTypes", "EComparison");
        }
        inline app::EComparison__Enum* create() {
            return il2cpp::create_object<app::EComparison__Enum>(get_class());
        }
    } // namespace EComparison__Enum
} // namespace app::classes::types
