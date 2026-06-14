#pragma once
#include <Modloader/app/structs/TokenType__Enum.h>
#include <Modloader/app/structs/TokenType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TokenType__Enum {
        inline app::TokenType__Enum__Class** type_info() {
            static app::TokenType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TokenType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TokenType__Enum__Class* get_class() {
            return il2cpp::get_class<app::TokenType__Enum__Class>(type_info(), "System", "TokenType");
        }
        inline app::TokenType__Enum* create() {
            return il2cpp::create_object<app::TokenType__Enum>(get_class());
        }
    } // namespace TokenType__Enum
} // namespace app::classes::types
