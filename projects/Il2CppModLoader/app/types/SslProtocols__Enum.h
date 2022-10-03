#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SslProtocols__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SslProtocols__Enum__Class** type_info;
        inline app::SslProtocols__Enum__Class* get_class() {
            return il2cpp::get_class<app::SslProtocols__Enum__Class>(type_info, "System.Security.Authentication", "SslProtocols");
        }
        inline app::SslProtocols__Enum* create() {
            return il2cpp::create_object<app::SslProtocols__Enum>(get_class());
        }
    } // namespace SslProtocols__Enum
} // namespace app::classes::types
