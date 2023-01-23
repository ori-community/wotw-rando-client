#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MicroProfilerGraph_FrameCache__Class.h>
#include <Modloader/app/structs/MicroProfilerGraph_FrameCache.h>
#include <Modloader/app/structs/MicroProfilerGraph_FrameCache__Boxed.h>
#include <Modloader/app/structs/MicroProfilerGraph_FrameCache__Array.h>

namespace app::classes::types {
    namespace MicroProfilerGraph_FrameCache {
        namespace {
            inline app::MicroProfilerGraph_FrameCache__Class* type_info_ref = nullptr;
        }
        inline app::MicroProfilerGraph_FrameCache__Class** type_info = &type_info_ref;
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
        inline app::MicroProfilerGraph_FrameCache__Array* create_array(const std::vector<app::MicroProfilerGraph_FrameCache>& items) {
            return il2cpp::array_new<app::MicroProfilerGraph_FrameCache__Array>(get_class(), items);
        }
    } // namespace MicroProfilerGraph_FrameCache
} // namespace app::classes::types
