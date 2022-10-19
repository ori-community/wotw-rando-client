#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssemblyNameFlags__Enum {
        inline app::AssemblyNameFlags__Enum__Class** type_info = (app::AssemblyNameFlags__Enum__Class**)(modloader::win::memory::resolve_rva(0x04733F18));
        inline app::AssemblyNameFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::AssemblyNameFlags__Enum__Class>(type_info, "System.Reflection", "AssemblyNameFlags");
        }
        inline app::AssemblyNameFlags__Enum* create() {
            return il2cpp::create_object<app::AssemblyNameFlags__Enum>(get_class());
        }
    } // namespace AssemblyNameFlags__Enum
} // namespace app::classes::types
