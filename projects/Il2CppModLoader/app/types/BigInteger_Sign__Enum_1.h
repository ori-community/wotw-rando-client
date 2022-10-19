#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BigInteger_Sign__Enum_1 {
        namespace {
            inline app::BigInteger_Sign__Enum_1__Class* type_info_ref = nullptr;
        }
        inline app::BigInteger_Sign__Enum_1__Class** type_info = &type_info_ref;
        inline app::BigInteger_Sign__Enum_1__Class* get_class() {
            return il2cpp::get_nested_class<app::BigInteger_Sign__Enum_1__Class>(type_info, "Mono.Math", "BigInteger", "Sign");
        }
        inline app::BigInteger_Sign__Enum_1* create() {
            return il2cpp::create_object<app::BigInteger_Sign__Enum_1>(get_class());
        }
    } // namespace BigInteger_Sign__Enum_1
} // namespace app::classes::types
