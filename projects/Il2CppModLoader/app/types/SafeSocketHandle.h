#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SafeSocketHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SafeSocketHandle__Class** type_info;
        inline app::SafeSocketHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeSocketHandle__Class>(type_info, "System.Net.Sockets", "SafeSocketHandle");
        }
        inline app::SafeSocketHandle* create() {
            return il2cpp::create_object<app::SafeSocketHandle>(get_class());
        }
    } // namespace SafeSocketHandle
} // namespace app::classes::types
