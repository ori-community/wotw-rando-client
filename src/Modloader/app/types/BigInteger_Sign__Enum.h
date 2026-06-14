#pragma once
#include <Modloader/app/structs/BigInteger_Sign__Enum.h>
#include <Modloader/app/structs/BigInteger_Sign__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BigInteger_Sign__Enum {
        inline app::BigInteger_Sign__Enum__Class** type_info() {
            static app::BigInteger_Sign__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BigInteger_Sign__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BigInteger_Sign__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BigInteger_Sign__Enum__Class>(type_info(), "Mono.Math", "BigInteger", "Sign");
        }
        inline app::BigInteger_Sign__Enum* create() {
            return il2cpp::create_object<app::BigInteger_Sign__Enum>(get_class());
        }
    } // namespace BigInteger_Sign__Enum
} // namespace app::classes::types
