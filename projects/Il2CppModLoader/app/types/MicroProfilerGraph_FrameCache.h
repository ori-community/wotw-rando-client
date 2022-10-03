#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MicroProfilerGraph_FrameCache {
        namespace {
            app::MicroProfilerGraph_FrameCache__Class* type_info_ref = nullptr;
        }
        app::MicroProfilerGraph_FrameCache__Class** type_info = &type_info_ref;
        inline app::MicroProfilerGraph_FrameCache__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfilerGraph_FrameCache__Class>(type_info, "", "MicroProfilerGraph", "FrameCache");
        }
        inline app::MicroProfilerGraph_FrameCache* create() {
            return il2cpp::create_object<app::MicroProfilerGraph_FrameCache>(get_class());
        }
        inline app::MicroProfilerGraph_FrameCache__Boxed* box(app::MicroProfilerGraph_FrameCache value) {
            return il2cpp::box_value<app::MicroProfilerGraph_FrameCache__Boxed>(get_class(), value);
        }
        inline app::MicroProfilerGraph_FrameCache__Array* create_array(int size) {
            return il2cpp::array_new<app::MicroProfilerGraph_FrameCache__Array>(get_class(), size);
        }
    } // namespace MicroProfilerGraph_FrameCache
} // namespace app::classes::types
