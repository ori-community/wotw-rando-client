#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeDescriptor_IUnimplemented {
        inline app::TypeDescriptor_IUnimplemented__Class** type_info = (app::TypeDescriptor_IUnimplemented__Class**)(modloader::win::memory::resolve_rva(0x04717AC0));
        inline app::TypeDescriptor_IUnimplemented__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_IUnimplemented__Class>(type_info, "System.ComponentModel", "TypeDescriptor", "IUnimplemented");
        }
    } // namespace TypeDescriptor_IUnimplemented
} // namespace app::classes::types
