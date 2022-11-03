#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PostLateUpdate_ProfilerEndFrame {
        namespace {
            inline app::PostLateUpdate_ProfilerEndFrame__Class* type_info_ref = nullptr;
        }
        inline app::PostLateUpdate_ProfilerEndFrame__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_ProfilerEndFrame__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_ProfilerEndFrame__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "ProfilerEndFrame");
        }
        inline app::PostLateUpdate_ProfilerEndFrame* create() {
            return il2cpp::create_object<app::PostLateUpdate_ProfilerEndFrame>(get_class());
        }
        inline app::PostLateUpdate_ProfilerEndFrame__Boxed* box(app::PostLateUpdate_ProfilerEndFrame value) {
            return il2cpp::box_value<app::PostLateUpdate_ProfilerEndFrame__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_ProfilerEndFrame
} // namespace app::classes::types
