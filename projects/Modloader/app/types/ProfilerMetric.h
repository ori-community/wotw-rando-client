#pragma once
#include <Modloader/app/structs/ProfilerMetric.h>
#include <Modloader/app/structs/ProfilerMetric__Boxed.h>
#include <Modloader/app/structs/ProfilerMetric__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProfilerMetric {
        inline app::ProfilerMetric__Class** type_info() {
            static app::ProfilerMetric__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProfilerMetric__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProfilerMetric__Class* get_class() {
            return il2cpp::get_class<app::ProfilerMetric__Class>(type_info(), "", "ProfilerMetric");
        }
        inline app::ProfilerMetric* create() {
            return il2cpp::create_object<app::ProfilerMetric>(get_class());
        }
        inline app::ProfilerMetric__Boxed* box(app::ProfilerMetric value) {
            return il2cpp::box_value<app::ProfilerMetric__Boxed>(get_class(), value);
        }
    } // namespace ProfilerMetric
} // namespace app::classes::types
