#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EarlyUpdate_ResetFrameStatsAfterPresent {
        namespace {
            inline app::EarlyUpdate_ResetFrameStatsAfterPresent__Class* type_info_ref = nullptr;
        }
        inline app::EarlyUpdate_ResetFrameStatsAfterPresent__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_ResetFrameStatsAfterPresent__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_ResetFrameStatsAfterPresent__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "ResetFrameStatsAfterPresent");
        }
        inline app::EarlyUpdate_ResetFrameStatsAfterPresent* create() {
            return il2cpp::create_object<app::EarlyUpdate_ResetFrameStatsAfterPresent>(get_class());
        }
        inline app::EarlyUpdate_ResetFrameStatsAfterPresent__Boxed* box(app::EarlyUpdate_ResetFrameStatsAfterPresent value) {
            return il2cpp::box_value<app::EarlyUpdate_ResetFrameStatsAfterPresent__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_ResetFrameStatsAfterPresent
} // namespace app::classes::types
