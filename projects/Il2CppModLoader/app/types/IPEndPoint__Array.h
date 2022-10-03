#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPEndPoint__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPEndPoint__Array__Class** type_info;
        inline app::IPEndPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::IPEndPoint__Array__Class>(type_info, "System.Net", "IPEndPoint[]");
        }
        inline app::IPEndPoint__Array* create() {
            return il2cpp::create_object<app::IPEndPoint__Array>(get_class());
        }
    } // namespace IPEndPoint__Array
} // namespace app::classes::types
