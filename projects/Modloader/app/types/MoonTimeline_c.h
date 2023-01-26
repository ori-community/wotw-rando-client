#pragma once
#include <Modloader/app/structs/MoonTimeline_c.h>
#include <Modloader/app/structs/MoonTimeline_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTimeline_c {
        inline app::MoonTimeline_c__Class** type_info() {
            static app::MoonTimeline_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTimeline_c__Class**)(modloader::win::memory::resolve_rva(0x0476DA68));
            }
            return cache;
        }
        inline app::MoonTimeline_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTimeline_c__Class>(type_info(), "Moon.Timeline", "MoonTimeline", "<>c");
        }
        inline app::MoonTimeline_c* create() {
            return il2cpp::create_object<app::MoonTimeline_c>(get_class());
        }
    } // namespace MoonTimeline_c
} // namespace app::classes::types
