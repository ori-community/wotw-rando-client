#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Assembly_UnmanagedMemoryStreamForModule {
        inline app::Assembly_UnmanagedMemoryStreamForModule__Class** type_info = (app::Assembly_UnmanagedMemoryStreamForModule__Class**)(modloader::win::memory::resolve_rva(0x04709C98));
        inline app::Assembly_UnmanagedMemoryStreamForModule__Class* get_class() {
            return il2cpp::get_nested_class<app::Assembly_UnmanagedMemoryStreamForModule__Class>(type_info, "System.Reflection", "Assembly", "UnmanagedMemoryStreamForModule");
        }
        inline app::Assembly_UnmanagedMemoryStreamForModule* create() {
            return il2cpp::create_object<app::Assembly_UnmanagedMemoryStreamForModule>(get_class());
        }
    } // namespace Assembly_UnmanagedMemoryStreamForModule
} // namespace app::classes::types
