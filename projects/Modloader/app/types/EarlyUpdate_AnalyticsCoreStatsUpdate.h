#pragma once
#include <Modloader/app/structs/EarlyUpdate_AnalyticsCoreStatsUpdate.h>
#include <Modloader/app/structs/EarlyUpdate_AnalyticsCoreStatsUpdate__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_AnalyticsCoreStatsUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_AnalyticsCoreStatsUpdate {
        inline app::EarlyUpdate_AnalyticsCoreStatsUpdate__Class** type_info() {
            static app::EarlyUpdate_AnalyticsCoreStatsUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_AnalyticsCoreStatsUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_AnalyticsCoreStatsUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_AnalyticsCoreStatsUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "AnalyticsCoreStatsUpdate");
        }
        inline app::EarlyUpdate_AnalyticsCoreStatsUpdate* create() {
            return il2cpp::create_object<app::EarlyUpdate_AnalyticsCoreStatsUpdate>(get_class());
        }
        inline app::EarlyUpdate_AnalyticsCoreStatsUpdate__Boxed* box(app::EarlyUpdate_AnalyticsCoreStatsUpdate value) {
            return il2cpp::box_value<app::EarlyUpdate_AnalyticsCoreStatsUpdate__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_AnalyticsCoreStatsUpdate
} // namespace app::classes::types
