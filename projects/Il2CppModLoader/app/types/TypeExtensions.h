#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeExtensions {
        inline app::TypeExtensions__Class** type_info = (app::TypeExtensions__Class**)(modloader::win::memory::resolve_rva(0x0477EB38));
        inline app::TypeExtensions__Class* get_class() {
            return il2cpp::get_class<app::TypeExtensions__Class>(type_info, "System.Dynamic.Utils", "TypeExtensions");
        }
        inline app::TypeExtensions* create() {
            return il2cpp::create_object<app::TypeExtensions>(get_class());
        }
    } // namespace TypeExtensions
} // namespace app::classes::types
