#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeyNumber__Enum {
        namespace {
            app::KeyNumber__Enum__Class* type_info_ref = nullptr;
        }
        app::KeyNumber__Enum__Class** type_info = &type_info_ref;
        inline app::KeyNumber__Enum__Class* get_class() {
            return il2cpp::get_class<app::KeyNumber__Enum__Class>(type_info, "System.Security.Cryptography", "KeyNumber");
        }
        inline app::KeyNumber__Enum* create() {
            return il2cpp::create_object<app::KeyNumber__Enum>(get_class());
        }
    } // namespace KeyNumber__Enum
} // namespace app::classes::types
