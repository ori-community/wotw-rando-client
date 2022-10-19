#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActivityFilter_c_DisplayClass11_0 {
        inline app::ActivityFilter_c_DisplayClass11_0__Class** type_info = (app::ActivityFilter_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x04776E30));
        inline app::ActivityFilter_c_DisplayClass11_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ActivityFilter_c_DisplayClass11_0__Class>(type_info, "System.Diagnostics.Tracing", "ActivityFilter", "<>c__DisplayClass11_0");
        }
        inline app::ActivityFilter_c_DisplayClass11_0* create() {
            return il2cpp::create_object<app::ActivityFilter_c_DisplayClass11_0>(get_class());
        }
    } // namespace ActivityFilter_c_DisplayClass11_0
} // namespace app::classes::types
