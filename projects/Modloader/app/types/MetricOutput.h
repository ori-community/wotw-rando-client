#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MetricOutput {
        namespace {
            inline app::MetricOutput__Class* type_info_ref = nullptr;
        }
        inline app::MetricOutput__Class** type_info = &type_info_ref;
        inline app::MetricOutput__Class* get_class() {
            return il2cpp::get_class<app::MetricOutput__Class>(type_info, "Moon.Profile", "MetricOutput");
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
