#pragma once
#include <Modloader/app/structs/StatisticResetIntervalOption__Enum.h>
#include <Modloader/app/structs/StatisticResetIntervalOption__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticResetIntervalOption__Enum {
        inline app::StatisticResetIntervalOption__Enum__Class** type_info() {
            static app::StatisticResetIntervalOption__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatisticResetIntervalOption__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatisticResetIntervalOption__Enum__Class* get_class() {
            return il2cpp::get_class<app::StatisticResetIntervalOption__Enum__Class>(type_info(), "PlayFab.PlayStreamModels", "StatisticResetIntervalOption");
        }
        inline app::StatisticResetIntervalOption__Enum* create() {
            return il2cpp::create_object<app::StatisticResetIntervalOption__Enum>(get_class());
        }
    } // namespace StatisticResetIntervalOption__Enum
} // namespace app::classes::types
