#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StressTester_c_DisplayClass134_0 {
        inline app::StressTester_c_DisplayClass134_0__Class** type_info = (app::StressTester_c_DisplayClass134_0__Class**)(modloader::win::memory::resolve_rva(0x0471B7D0));
        inline app::StressTester_c_DisplayClass134_0__Class* get_class() {
            return il2cpp::get_nested_class<app::StressTester_c_DisplayClass134_0__Class>(type_info, "", "StressTester", "<>c__DisplayClass134_0");
        }
        inline app::StressTester_c_DisplayClass134_0* create() {
            return il2cpp::create_object<app::StressTester_c_DisplayClass134_0>(get_class());
        }
    } // namespace StressTester_c_DisplayClass134_0
} // namespace app::classes::types
