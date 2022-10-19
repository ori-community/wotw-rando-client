#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BigInteger_GetBytesMode__Enum {
        namespace {
            inline app::BigInteger_GetBytesMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BigInteger_GetBytesMode__Enum__Class** type_info = &type_info_ref;
        inline app::BigInteger_GetBytesMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BigInteger_GetBytesMode__Enum__Class>(type_info, "System.Numerics", "BigInteger", "GetBytesMode");
        }
        inline app::BigInteger_GetBytesMode__Enum* create() {
            return il2cpp::create_object<app::BigInteger_GetBytesMode__Enum>(get_class());
        }
    } // namespace BigInteger_GetBytesMode__Enum
} // namespace app::classes::types
