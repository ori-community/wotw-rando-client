#pragma once
#include <Modloader/app/structs/LegacyTimelineState.h>
#include <Modloader/app/structs/LegacyTimelineState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyTimelineState {
        inline app::LegacyTimelineState__Class** type_info() {
            static app::LegacyTimelineState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyTimelineState__Class**)(modloader::win::memory::resolve_rva(0x0470D128));
            }
            return cache;
        }
        inline app::LegacyTimelineState__Class* get_class() {
            return il2cpp::get_class<app::LegacyTimelineState__Class>(type_info(), "Moon.Timeline", "LegacyTimelineState");
        }
        inline app::LegacyTimelineState* create() {
            return il2cpp::create_object<app::LegacyTimelineState>(get_class());
        }
    } // namespace LegacyTimelineState
} // namespace app::classes::types
