#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeyUsages__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeyUsages__Enum__Class** type_info;
        inline app::KeyUsages__Enum__Class* get_class() {
            return il2cpp::get_class<app::KeyUsages__Enum__Class>(type_info, "Mono.Security.X509.Extensions", "KeyUsages");
        }
        inline app::KeyUsages__Enum* create() {
            return il2cpp::create_object<app::KeyUsages__Enum>(get_class());
        }
    } // namespace KeyUsages__Enum
} // namespace app::classes::types
