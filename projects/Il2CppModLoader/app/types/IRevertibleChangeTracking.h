#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRevertibleChangeTracking {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRevertibleChangeTracking__Class** type_info;
        inline app::IRevertibleChangeTracking__Class* get_class() {
            return il2cpp::get_class<app::IRevertibleChangeTracking__Class>(type_info, "System.ComponentModel", "IRevertibleChangeTracking");
        }
    } // namespace IRevertibleChangeTracking
} // namespace app::classes::types
