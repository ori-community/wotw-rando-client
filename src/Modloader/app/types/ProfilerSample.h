#pragma once
#include <Modloader/app/structs/ProfilerSample.h>
#include <Modloader/app/structs/ProfilerSample__Boxed.h>
#include <Modloader/app/structs/ProfilerSample__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProfilerSample {
        inline app::ProfilerSample__Class** type_info() {
            static app::ProfilerSample__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProfilerSample__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProfilerSample__Class* get_class() {
            return il2cpp::get_class<app::ProfilerSample__Class>(type_info(), "Moon", "ProfilerSample");
        }
        inline app::ProfilerSample* create() {
            return il2cpp::create_object<app::ProfilerSample>(get_class());
        }
        inline app::ProfilerSample__Boxed* box(app::ProfilerSample value) {
            return il2cpp::box_value<app::ProfilerSample__Boxed>(get_class(), value);
        }
    } // namespace ProfilerSample
} // namespace app::classes::types
