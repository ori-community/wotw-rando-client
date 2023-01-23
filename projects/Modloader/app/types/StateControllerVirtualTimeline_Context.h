#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StateControllerVirtualTimeline_Context__Class.h>
#include <Modloader/app/structs/StateControllerVirtualTimeline_Context.h>
#include <Modloader/app/structs/StateControllerVirtualTimeline_Context__Boxed.h>

namespace app::classes::types {
    namespace StateControllerVirtualTimeline_Context {
        inline app::StateControllerVirtualTimeline_Context__Class** type_info = (app::StateControllerVirtualTimeline_Context__Class**)(modloader::win::memory::resolve_rva(0x047652C0));
        inline app::StateControllerVirtualTimeline_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::StateControllerVirtualTimeline_Context__Class>(type_info, "Moon.Timeline", "StateControllerVirtualTimeline", "Context");
        }
        inline app::StateControllerVirtualTimeline_Context* create() {
            return il2cpp::create_object<app::StateControllerVirtualTimeline_Context>(get_class());
        }
        inline app::StateControllerVirtualTimeline_Context__Boxed* box(app::StateControllerVirtualTimeline_Context value) {
            return il2cpp::box_value<app::StateControllerVirtualTimeline_Context__Boxed>(get_class(), value);
        }
    } // namespace StateControllerVirtualTimeline_Context
} // namespace app::classes::types
