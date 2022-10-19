#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BindingFlags__Enum {
        inline app::BindingFlags__Enum__Class** type_info = (app::BindingFlags__Enum__Class**)(modloader::win::memory::resolve_rva(0x04745690));
        inline app::BindingFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::BindingFlags__Enum__Class>(type_info, "System.Reflection", "BindingFlags");
        }
        inline app::BindingFlags__Enum* create() {
            return il2cpp::create_object<app::BindingFlags__Enum>(get_class());
        }
    } // namespace BindingFlags__Enum
} // namespace app::classes::types
