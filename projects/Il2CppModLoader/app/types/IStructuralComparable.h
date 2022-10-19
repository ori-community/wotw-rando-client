#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IStructuralComparable {
        inline app::IStructuralComparable__Class** type_info = (app::IStructuralComparable__Class**)(modloader::win::memory::resolve_rva(0x04729BA8));
        inline app::IStructuralComparable__Class* get_class() {
            return il2cpp::get_class<app::IStructuralComparable__Class>(type_info, "System.Collections", "IStructuralComparable");
        }
    } // namespace IStructuralComparable
} // namespace app::classes::types
