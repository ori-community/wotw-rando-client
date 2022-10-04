#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IIdentity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IIdentity__Class** type_info;
        inline app::IIdentity__Class* get_class() {
            return il2cpp::get_class<app::IIdentity__Class>(type_info, "System.Security.Principal", "IIdentity");
        }
    } // namespace IIdentity
} // namespace app::classes::types
