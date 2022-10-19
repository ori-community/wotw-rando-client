#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IntPtr__Array {
        inline app::IntPtr__Array__Class** type_info = (app::IntPtr__Array__Class**)(modloader::win::memory::resolve_rva(0x0471E010));
        inline app::IntPtr__Array__Class* get_class() {
            return il2cpp::get_class<app::IntPtr__Array__Class>(type_info, "System", "IntPtr[]");
        }
        inline app::IntPtr__Array* create() {
            return il2cpp::create_object<app::IntPtr__Array>(get_class());
        }
    } // namespace IntPtr__Array
} // namespace app::classes::types
