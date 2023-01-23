#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ActivityFilter_c_DisplayClass13_0__Class.h>
#include <Modloader/app/structs/ActivityFilter_c_DisplayClass13_0.h>

namespace app::classes::types {
    namespace ActivityFilter_c_DisplayClass13_0 {
        inline app::ActivityFilter_c_DisplayClass13_0__Class** type_info = (app::ActivityFilter_c_DisplayClass13_0__Class**)(modloader::win::memory::resolve_rva(0x04792C18));
        inline app::ActivityFilter_c_DisplayClass13_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ActivityFilter_c_DisplayClass13_0__Class>(type_info, "System.Diagnostics.Tracing", "ActivityFilter", "<>c__DisplayClass13_0");
        }
        inline app::ActivityFilter_c_DisplayClass13_0* create() {
            return il2cpp::create_object<app::ActivityFilter_c_DisplayClass13_0>(get_class());
        }
    } // namespace ActivityFilter_c_DisplayClass13_0
} // namespace app::classes::types
