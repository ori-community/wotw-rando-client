#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IStructuralEquatable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IStructuralEquatable__Class** type_info;
        inline app::IStructuralEquatable__Class* get_class() {
            return il2cpp::get_class<app::IStructuralEquatable__Class>(type_info, "System.Collections", "IStructuralEquatable");
        }
    } // namespace IStructuralEquatable
} // namespace app::classes::types
