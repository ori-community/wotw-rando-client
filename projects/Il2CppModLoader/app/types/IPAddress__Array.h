#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPAddress__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPAddress__Array__Class** type_info;
        inline app::IPAddress__Array__Class* get_class() {
            return il2cpp::get_class<app::IPAddress__Array__Class>(type_info, "System.Net", "IPAddress[]");
        }
        inline app::IPAddress__Array* create() {
            return il2cpp::create_object<app::IPAddress__Array>(get_class());
        }
    } // namespace IPAddress__Array
} // namespace app::classes::types
