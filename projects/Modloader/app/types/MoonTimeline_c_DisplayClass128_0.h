#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTimeline_c_DisplayClass128_0__Class.h>
#include <Modloader/app/structs/MoonTimeline_c_DisplayClass128_0.h>

namespace app::classes::types {
    namespace MoonTimeline_c_DisplayClass128_0 {
        inline app::MoonTimeline_c_DisplayClass128_0__Class** type_info = (app::MoonTimeline_c_DisplayClass128_0__Class**)(modloader::win::memory::resolve_rva(0x0470BF88));
        inline app::MoonTimeline_c_DisplayClass128_0__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTimeline_c_DisplayClass128_0__Class>(type_info, "Moon.Timeline", "MoonTimeline", "<>c__DisplayClass128_0");
        }
        inline app::MoonTimeline_c_DisplayClass128_0* create() {
            return il2cpp::create_object<app::MoonTimeline_c_DisplayClass128_0>(get_class());
        }
    } // namespace MoonTimeline_c_DisplayClass128_0
} // namespace app::classes::types
