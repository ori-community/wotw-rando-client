#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_IUnimplemented {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeDescriptor_IUnimplemented__Class** type_info;
        inline app::TypeDescriptor_IUnimplemented__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_IUnimplemented__Class>(type_info, "System.ComponentModel", "TypeDescriptor", "IUnimplemented");
        }
    } // namespace TypeDescriptor_IUnimplemented
} // namespace app::classes::types
