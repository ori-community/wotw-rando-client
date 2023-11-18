#pragma once
#include <Modloader/app/structs/MoonProfilerFrame.h>
#include <Modloader/app/structs/MoonProfilerFrame__Boxed.h>
#include <Modloader/app/structs/MoonProfilerFrame__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonProfilerFrame {
        inline app::MoonProfilerFrame__Class** type_info() {
            static app::MoonProfilerFrame__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonProfilerFrame__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonProfilerFrame__Class* get_class() {
            return il2cpp::get_class<app::MoonProfilerFrame__Class>(type_info(), "Moon", "MoonProfilerFrame");
        }
        inline app::MoonProfilerFrame* create() {
            return il2cpp::create_object<app::MoonProfilerFrame>(get_class());
        }
        inline app::MoonProfilerFrame__Boxed* box(app::MoonProfilerFrame value) {
            return il2cpp::box_value<app::MoonProfilerFrame__Boxed>(get_class(), value);
        }
    } // namespace MoonProfilerFrame
} // namespace app::classes::types
