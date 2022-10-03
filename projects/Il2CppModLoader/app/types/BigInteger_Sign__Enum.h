#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BigInteger_Sign__Enum {
        namespace {
            app::BigInteger_Sign__Enum__Class* type_info_ref = nullptr;
        }
        app::BigInteger_Sign__Enum__Class** type_info = &type_info_ref;
        inline app::BigInteger_Sign__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BigInteger_Sign__Enum__Class>(type_info, "Mono.Math", "BigInteger", "Sign");
        }
        inline app::BigInteger_Sign__Enum* create() {
            return il2cpp::create_object<app::BigInteger_Sign__Enum>(get_class());
        }
    } // namespace BigInteger_Sign__Enum
} // namespace app::classes::types
