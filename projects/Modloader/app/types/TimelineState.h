#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimelineState__Class.h>
#include <Modloader/app/structs/TimelineState.h>

namespace app::classes::types {
    namespace TimelineState {
        inline app::TimelineState__Class** type_info = (app::TimelineState__Class**)(modloader::win::memory::resolve_rva(0x0472FC88));
        inline app::TimelineState__Class* get_class() {
            return il2cpp::get_class<app::TimelineState__Class>(type_info, "Moon.Timeline", "TimelineState");
        }
        inline app::TimelineState* create() {
            return il2cpp::create_object<app::TimelineState>(get_class());
        }
    } // namespace TimelineState
} // namespace app::classes::types
