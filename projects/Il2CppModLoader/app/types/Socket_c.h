#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Socket_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Socket_c__Class** type_info;
        inline app::Socket_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Socket_c__Class>(type_info, "System.Net.Sockets", "Socket", "<>c");
        }
        inline app::Socket_c* create() {
            return il2cpp::create_object<app::Socket_c>(get_class());
        }
    } // namespace Socket_c
} // namespace app::classes::types
