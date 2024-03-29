#pragma once
#include <Modloader/app/structs/MetricOutput.h>
#include <Modloader/app/structs/MetricOutput__Array.h>
#include <Modloader/app/structs/MetricOutput__Boxed.h>
#include <Modloader/app/structs/MetricOutput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MetricOutput {
        inline app::MetricOutput__Class** type_info() {
            static app::MetricOutput__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MetricOutput__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MetricOutput__Class* get_class() {
            return il2cpp::get_class<app::MetricOutput__Class>(type_info(), "Moon.Profile", "MetricOutput");
        }
        inline app::MetricOutput* create() {
            return il2cpp::create_object<app::MetricOutput>(get_class());
        }
        inline app::MetricOutput__Boxed* box(app::MetricOutput value) {
            return il2cpp::box_value<app::MetricOutput__Boxed>(get_class(), value);
        }
        inline app::MetricOutput__Array* create_array(int size) {
            return il2cpp::array_new<app::MetricOutput__Array>(get_class(), size);
        }
        inline app::MetricOutput__Array* create_array(const std::vector<app::MetricOutput>& items) {
            return il2cpp::array_new<app::MetricOutput__Array>(get_class(), items);
        }
    } // namespace MetricOutput
} // namespace app::classes::types
