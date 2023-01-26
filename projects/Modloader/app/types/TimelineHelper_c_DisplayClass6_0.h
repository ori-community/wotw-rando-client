#pragma once
#include <Modloader/app/structs/TimelineHelper_c_DisplayClass6_0.h>
#include <Modloader/app/structs/TimelineHelper_c_DisplayClass6_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineHelper_c_DisplayClass6_0 {
        inline app::TimelineHelper_c_DisplayClass6_0__Class** type_info() {
            static app::TimelineHelper_c_DisplayClass6_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineHelper_c_DisplayClass6_0__Class**)(modloader::win::memory::resolve_rva(0x0476A7A8));
            }
            return cache;
        }
        inline app::TimelineHelper_c_DisplayClass6_0__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineHelper_c_DisplayClass6_0__Class>(type_info(), "Moon.Timeline", "TimelineHelper", "<>c__DisplayClass6_0");
        }
        inline app::TimelineHelper_c_DisplayClass6_0* create() {
            return il2cpp::create_object<app::TimelineHelper_c_DisplayClass6_0>(get_class());
        }
    } // namespace TimelineHelper_c_DisplayClass6_0
} // namespace app::classes::types
