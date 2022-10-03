#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Lease {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Lease__Class** type_info;
        inline app::Lease__Class* get_class() {
            return il2cpp::get_class<app::Lease__Class>(type_info, "System.Runtime.Remoting.Lifetime", "Lease");
        }
        inline app::Lease* create() {
            return il2cpp::create_object<app::Lease>(get_class());
        }
    } // namespace Lease
} // namespace app::classes::types
