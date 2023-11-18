#pragma once
#include <Modloader/app/structs/TimelineHelper_EverythingConstrainedTo_d_28.h>
#include <Modloader/app/structs/TimelineHelper_EverythingConstrainedTo_d_28__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineHelper_EverythingConstrainedTo_d_28 {
        inline app::TimelineHelper_EverythingConstrainedTo_d_28__Class** type_info() {
            static app::TimelineHelper_EverythingConstrainedTo_d_28__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineHelper_EverythingConstrainedTo_d_28__Class**)(modloader::win::memory::resolve_rva(0x047805E8));
            }
            return cache;
        }
        inline app::TimelineHelper_EverythingConstrainedTo_d_28__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineHelper_EverythingConstrainedTo_d_28__Class>(type_info(), "Moon.Timeline", "TimelineHelper", "<EverythingConstrainedTo>d__28");
        }
        inline app::TimelineHelper_EverythingConstrainedTo_d_28* create() {
            return il2cpp::create_object<app::TimelineHelper_EverythingConstrainedTo_d_28>(get_class());
        }
    } // namespace TimelineHelper_EverythingConstrainedTo_d_28
} // namespace app::classes::types
