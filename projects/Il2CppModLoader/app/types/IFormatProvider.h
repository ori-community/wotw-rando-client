#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IFormatProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IFormatProvider__Class** type_info;
        inline app::IFormatProvider__Class* get_class() {
            return il2cpp::get_class<app::IFormatProvider__Class>(type_info, "System", "IFormatProvider");
        }
    } // namespace IFormatProvider
} // namespace app::classes::types
