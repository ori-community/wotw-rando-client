#pragma once
#include <Modloader/app/structs/AnalyticsSessionInfo_SessionStateChanged.h>
#include <Modloader/app/structs/AnalyticsSessionInfo_SessionStateChanged__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnalyticsSessionInfo_SessionStateChanged {
        inline app::AnalyticsSessionInfo_SessionStateChanged__Class** type_info() {
            static app::AnalyticsSessionInfo_SessionStateChanged__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnalyticsSessionInfo_SessionStateChanged__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnalyticsSessionInfo_SessionStateChanged__Class* get_class() {
            return il2cpp::get_nested_class<app::AnalyticsSessionInfo_SessionStateChanged__Class>(type_info(), "UnityEngine.Analytics", "AnalyticsSessionInfo", "SessionStateChanged");
        }
        inline app::AnalyticsSessionInfo_SessionStateChanged* create() {
            return il2cpp::create_object<app::AnalyticsSessionInfo_SessionStateChanged>(get_class());
        }
    } // namespace AnalyticsSessionInfo_SessionStateChanged
} // namespace app::classes::types
