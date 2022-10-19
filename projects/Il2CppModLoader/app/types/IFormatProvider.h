#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IFormatProvider {
        inline app::IFormatProvider__Class** type_info = (app::IFormatProvider__Class**)(modloader::win::memory::resolve_rva(0x0477AFC8));
        inline app::IFormatProvider__Class* get_class() {
            return il2cpp::get_class<app::IFormatProvider__Class>(type_info, "System", "IFormatProvider");
        }
    } // namespace IFormatProvider
} // namespace app::classes::types
