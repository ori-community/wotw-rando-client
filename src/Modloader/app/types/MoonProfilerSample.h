#pragma once
#include <Modloader/app/structs/MoonProfilerSample.h>
#include <Modloader/app/structs/MoonProfilerSample__Boxed.h>
#include <Modloader/app/structs/MoonProfilerSample__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonProfilerSample {
        inline app::MoonProfilerSample__Class** type_info() {
            static app::MoonProfilerSample__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonProfilerSample__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonProfilerSample__Class* get_class() {
            return il2cpp::get_class<app::MoonProfilerSample__Class>(type_info(), "Moon", "MoonProfilerSample");
        }
        inline app::MoonProfilerSample* create() {
            return il2cpp::create_object<app::MoonProfilerSample>(get_class());
        }
        inline app::MoonProfilerSample__Boxed* box(app::MoonProfilerSample value) {
            return il2cpp::box_value<app::MoonProfilerSample__Boxed>(get_class(), value);
        }
    } // namespace MoonProfilerSample
} // namespace app::classes::types
