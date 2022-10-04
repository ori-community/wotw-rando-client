#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IStructuralComparable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IStructuralComparable__Class** type_info;
        inline app::IStructuralComparable__Class* get_class() {
            return il2cpp::get_class<app::IStructuralComparable__Class>(type_info, "System.Collections", "IStructuralComparable");
        }
        inline app::IStructuralComparable* create() {
            return il2cpp::create_object<app::IStructuralComparable>(get_class());
        }
    } // namespace IStructuralComparable
} // namespace app::classes::types
