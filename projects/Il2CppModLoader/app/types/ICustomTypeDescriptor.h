#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICustomTypeDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICustomTypeDescriptor__Class** type_info;
        inline app::ICustomTypeDescriptor__Class* get_class() {
            return il2cpp::get_class<app::ICustomTypeDescriptor__Class>(type_info, "System.ComponentModel", "ICustomTypeDescriptor");
        }
    } // namespace ICustomTypeDescriptor
} // namespace app::classes::types
