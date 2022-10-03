#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SslPolicyErrors__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SslPolicyErrors__Enum__Class** type_info;
        inline app::SslPolicyErrors__Enum__Class* get_class() {
            return il2cpp::get_class<app::SslPolicyErrors__Enum__Class>(type_info, "System.Net.Security", "SslPolicyErrors");
        }
        inline app::SslPolicyErrors__Enum* create() {
            return il2cpp::create_object<app::SslPolicyErrors__Enum>(get_class());
        }
    } // namespace SslPolicyErrors__Enum
} // namespace app::classes::types
