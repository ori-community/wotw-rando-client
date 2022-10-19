#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeyNumber__Enum {
        namespace {
            inline app::KeyNumber__Enum__Class* type_info_ref = nullptr;
        }
        inline app::KeyNumber__Enum__Class** type_info = &type_info_ref;
        inline app::KeyNumber__Enum__Class* get_class() {
            return il2cpp::get_class<app::KeyNumber__Enum__Class>(type_info, "System.Security.Cryptography", "KeyNumber");
        }
        inline app::KeyNumber__Enum* create() {
            return il2cpp::create_object<app::KeyNumber__Enum>(get_class());
        }
    } // namespace KeyNumber__Enum
} // namespace app::classes::types
