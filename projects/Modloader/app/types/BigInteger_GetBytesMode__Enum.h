#pragma once
#include <Modloader/app/structs/BigInteger_GetBytesMode__Enum.h>
#include <Modloader/app/structs/BigInteger_GetBytesMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BigInteger_GetBytesMode__Enum {
        inline app::BigInteger_GetBytesMode__Enum__Class** type_info() {
            static app::BigInteger_GetBytesMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BigInteger_GetBytesMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BigInteger_GetBytesMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BigInteger_GetBytesMode__Enum__Class>(type_info(), "System.Numerics", "BigInteger", "GetBytesMode");
        }
        inline app::BigInteger_GetBytesMode__Enum* create() {
            return il2cpp::create_object<app::BigInteger_GetBytesMode__Enum>(get_class());
        }
    } // namespace BigInteger_GetBytesMode__Enum
} // namespace app::classes::types
