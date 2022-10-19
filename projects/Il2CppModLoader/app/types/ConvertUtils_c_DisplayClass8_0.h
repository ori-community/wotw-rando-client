#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConvertUtils_c_DisplayClass8_0 {
        inline app::ConvertUtils_c_DisplayClass8_0__Class** type_info = (app::ConvertUtils_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x0476EF00));
        inline app::ConvertUtils_c_DisplayClass8_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ConvertUtils_c_DisplayClass8_0__Class>(type_info, "Newtonsoft.Json.Utilities", "ConvertUtils", "<>c__DisplayClass8_0");
        }
        inline app::ConvertUtils_c_DisplayClass8_0* create() {
            return il2cpp::create_object<app::ConvertUtils_c_DisplayClass8_0>(get_class());
        }
    } // namespace ConvertUtils_c_DisplayClass8_0
} // namespace app::classes::types
