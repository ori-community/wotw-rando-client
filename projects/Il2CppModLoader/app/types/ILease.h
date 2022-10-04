#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ILease {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ILease__Class** type_info;
        inline app::ILease__Class* get_class() {
            return il2cpp::get_class<app::ILease__Class>(type_info, "System.Runtime.Remoting.Lifetime", "ILease");
        }
    } // namespace ILease
} // namespace app::classes::types
