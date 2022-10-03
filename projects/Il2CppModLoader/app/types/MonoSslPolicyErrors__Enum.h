#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoSslPolicyErrors__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoSslPolicyErrors__Enum__Class** type_info;
        inline app::MonoSslPolicyErrors__Enum__Class* get_class() {
            return il2cpp::get_class<app::MonoSslPolicyErrors__Enum__Class>(type_info, "Mono.Security.Interface", "MonoSslPolicyErrors");
        }
        inline app::MonoSslPolicyErrors__Enum* create() {
            return il2cpp::create_object<app::MonoSslPolicyErrors__Enum>(get_class());
        }
    } // namespace MonoSslPolicyErrors__Enum
} // namespace app::classes::types
