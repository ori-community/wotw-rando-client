#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProfilerSample {
        namespace {
            app::ProfilerSample__Class* type_info_ref = nullptr;
        }
        app::ProfilerSample__Class** type_info = &type_info_ref;
        inline app::ProfilerSample__Class* get_class() {
            return il2cpp::get_class<app::ProfilerSample__Class>(type_info, "Moon", "ProfilerSample");
        }
        inline app::ProfilerSample* create() {
            return il2cpp::create_object<app::ProfilerSample>(get_class());
        }
        inline app::ProfilerSample__Boxed* box(app::ProfilerSample value) {
            return il2cpp::box_value<app::ProfilerSample__Boxed>(get_class(), value);
        }
    } // namespace ProfilerSample
} // namespace app::classes::types
