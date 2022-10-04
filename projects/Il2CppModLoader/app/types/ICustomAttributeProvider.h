#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICustomAttributeProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICustomAttributeProvider__Class** type_info;
        inline app::ICustomAttributeProvider__Class* get_class() {
            return il2cpp::get_class<app::ICustomAttributeProvider__Class>(type_info, "System.Reflection", "ICustomAttributeProvider");
        }
    } // namespace ICustomAttributeProvider
} // namespace app::classes::types
