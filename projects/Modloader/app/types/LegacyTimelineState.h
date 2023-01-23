#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyTimelineState__Class.h>
#include <Modloader/app/structs/LegacyTimelineState.h>

namespace app::classes::types {
    namespace LegacyTimelineState {
        inline app::LegacyTimelineState__Class** type_info = (app::LegacyTimelineState__Class**)(modloader::win::memory::resolve_rva(0x0470D128));
        inline app::LegacyTimelineState__Class* get_class() {
            return il2cpp::get_class<app::LegacyTimelineState__Class>(type_info, "Moon.Timeline", "LegacyTimelineState");
        }
        inline app::LegacyTimelineState* create() {
            return il2cpp::create_object<app::LegacyTimelineState>(get_class());
        }
    } // namespace LegacyTimelineState
} // namespace app::classes::types
