#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IComparable {
        inline app::IComparable__Class** type_info = (app::IComparable__Class**)(modloader::win::memory::resolve_rva(0x04743E08));
        inline app::IComparable__Class* get_class() {
            return il2cpp::get_class<app::IComparable__Class>(type_info, "System", "IComparable");
        }
    } // namespace IComparable
} // namespace app::classes::types
