#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IChangeTracking {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IChangeTracking__Class** type_info;
        inline app::IChangeTracking__Class* get_class() {
            return il2cpp::get_class<app::IChangeTracking__Class>(type_info, "System.ComponentModel", "IChangeTracking");
        }
        inline app::IChangeTracking* create() {
            return il2cpp::create_object<app::IChangeTracking>(get_class());
        }
    } // namespace IChangeTracking
} // namespace app::classes::types
