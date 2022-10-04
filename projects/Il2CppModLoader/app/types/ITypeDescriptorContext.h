#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITypeDescriptorContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITypeDescriptorContext__Class** type_info;
        inline app::ITypeDescriptorContext__Class* get_class() {
            return il2cpp::get_class<app::ITypeDescriptorContext__Class>(type_info, "System.ComponentModel", "ITypeDescriptorContext");
        }
    } // namespace ITypeDescriptorContext
} // namespace app::classes::types
