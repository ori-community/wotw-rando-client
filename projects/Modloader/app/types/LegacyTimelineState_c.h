#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyTimelineState_c__Class.h>
#include <Modloader/app/structs/LegacyTimelineState_c.h>

namespace app::classes::types {
    namespace LegacyTimelineState_c {
        inline app::LegacyTimelineState_c__Class** type_info = (app::LegacyTimelineState_c__Class**)(modloader::win::memory::resolve_rva(0x0473CBD8));
        inline app::LegacyTimelineState_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyTimelineState_c__Class>(type_info, "Moon.Timeline", "LegacyTimelineState", "<>c");
        }
        inline app::LegacyTimelineState_c* create() {
            return il2cpp::create_object<app::LegacyTimelineState_c>(get_class());
        }
    } // namespace LegacyTimelineState_c
} // namespace app::classes::types
