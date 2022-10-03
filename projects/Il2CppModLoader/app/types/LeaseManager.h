#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaseManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaseManager__Class** type_info;
        inline app::LeaseManager__Class* get_class() {
            return il2cpp::get_class<app::LeaseManager__Class>(type_info, "System.Runtime.Remoting.Lifetime", "LeaseManager");
        }
        inline app::LeaseManager* create() {
            return il2cpp::create_object<app::LeaseManager>(get_class());
        }
    } // namespace LeaseManager
} // namespace app::classes::types
