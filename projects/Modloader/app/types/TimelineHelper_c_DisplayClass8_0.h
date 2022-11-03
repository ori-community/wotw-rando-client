#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineHelper_c_DisplayClass8_0 {
        inline app::TimelineHelper_c_DisplayClass8_0__Class** type_info = (app::TimelineHelper_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x04703D38));
        inline app::TimelineHelper_c_DisplayClass8_0__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineHelper_c_DisplayClass8_0__Class>(type_info, "Moon.Timeline", "TimelineHelper", "<>c__DisplayClass8_0");
        }
        inline app::TimelineHelper_c_DisplayClass8_0* create() {
            return il2cpp::create_object<app::TimelineHelper_c_DisplayClass8_0>(get_class());
        }
    } // namespace TimelineHelper_c_DisplayClass8_0
} // namespace app::classes::types
