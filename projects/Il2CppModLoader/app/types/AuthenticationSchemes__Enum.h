#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AuthenticationSchemes__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AuthenticationSchemes__Enum__Class** type_info;
        inline app::AuthenticationSchemes__Enum__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationSchemes__Enum__Class>(type_info, "System.Net", "AuthenticationSchemes");
        }
        inline app::AuthenticationSchemes__Enum* create() {
            return il2cpp::create_object<app::AuthenticationSchemes__Enum>(get_class());
        }
    } // namespace AuthenticationSchemes__Enum
} // namespace app::classes::types
