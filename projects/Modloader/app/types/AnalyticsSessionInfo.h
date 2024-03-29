#pragma once
#include <Modloader/app/structs/AnalyticsSessionInfo.h>
#include <Modloader/app/structs/AnalyticsSessionInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnalyticsSessionInfo {
        inline app::AnalyticsSessionInfo__Class** type_info() {
            static app::AnalyticsSessionInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnalyticsSessionInfo__Class**)(modloader::win::memory::resolve_rva(0x047668F0));
            }
            return cache;
        }
        inline app::AnalyticsSessionInfo__Class* get_class() {
            return il2cpp::get_class<app::AnalyticsSessionInfo__Class>(type_info(), "UnityEngine.Analytics", "AnalyticsSessionInfo");
        }
        inline app::AnalyticsSessionInfo* create() {
            return il2cpp::create_object<app::AnalyticsSessionInfo>(get_class());
        }
    } // namespace AnalyticsSessionInfo
} // namespace app::classes::types
