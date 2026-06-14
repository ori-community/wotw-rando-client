#pragma once
#include <Modloader/app/structs/EarlyUpdate_PerformanceAnalyticsUpdate.h>
#include <Modloader/app/structs/EarlyUpdate_PerformanceAnalyticsUpdate__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_PerformanceAnalyticsUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_PerformanceAnalyticsUpdate {
        inline app::EarlyUpdate_PerformanceAnalyticsUpdate__Class** type_info() {
            static app::EarlyUpdate_PerformanceAnalyticsUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_PerformanceAnalyticsUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_PerformanceAnalyticsUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_PerformanceAnalyticsUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "PerformanceAnalyticsUpdate");
        }
        inline app::EarlyUpdate_PerformanceAnalyticsUpdate* create() {
            return il2cpp::create_object<app::EarlyUpdate_PerformanceAnalyticsUpdate>(get_class());
        }
        inline app::EarlyUpdate_PerformanceAnalyticsUpdate__Boxed* box(app::EarlyUpdate_PerformanceAnalyticsUpdate value) {
            return il2cpp::box_value<app::EarlyUpdate_PerformanceAnalyticsUpdate__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_PerformanceAnalyticsUpdate
} // namespace app::classes::types
