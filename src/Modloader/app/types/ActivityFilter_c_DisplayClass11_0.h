#pragma once
#include <Modloader/app/structs/ActivityFilter_c_DisplayClass11_0.h>
#include <Modloader/app/structs/ActivityFilter_c_DisplayClass11_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivityFilter_c_DisplayClass11_0 {
        inline app::ActivityFilter_c_DisplayClass11_0__Class** type_info() {
            static app::ActivityFilter_c_DisplayClass11_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ActivityFilter_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x04776E30));
            }
            return cache;
        }
        inline app::ActivityFilter_c_DisplayClass11_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ActivityFilter_c_DisplayClass11_0__Class>(type_info(), "System.Diagnostics.Tracing", "ActivityFilter", "<>c__DisplayClass11_0");
        }
        inline app::ActivityFilter_c_DisplayClass11_0* create() {
            return il2cpp::create_object<app::ActivityFilter_c_DisplayClass11_0>(get_class());
        }
    } // namespace ActivityFilter_c_DisplayClass11_0
} // namespace app::classes::types
