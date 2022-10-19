#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RectExtensions_c_DisplayClass75_0 {
        inline app::RectExtensions_c_DisplayClass75_0__Class** type_info = (app::RectExtensions_c_DisplayClass75_0__Class**)(modloader::win::memory::resolve_rva(0x04745998));
        inline app::RectExtensions_c_DisplayClass75_0__Class* get_class() {
            return il2cpp::get_nested_class<app::RectExtensions_c_DisplayClass75_0__Class>(type_info, "Sini.Unity", "RectExtensions", "<>c__DisplayClass75_0");
        }
        inline app::RectExtensions_c_DisplayClass75_0* create() {
            return il2cpp::create_object<app::RectExtensions_c_DisplayClass75_0>(get_class());
        }
    } // namespace RectExtensions_c_DisplayClass75_0
} // namespace app::classes::types
