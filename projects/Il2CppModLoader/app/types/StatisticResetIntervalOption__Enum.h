#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticResetIntervalOption__Enum {
        namespace {
            app::StatisticResetIntervalOption__Enum__Class* type_info_ref = nullptr;
        }
        app::StatisticResetIntervalOption__Enum__Class** type_info = &type_info_ref;
        inline app::StatisticResetIntervalOption__Enum__Class* get_class() {
            return il2cpp::get_class<app::StatisticResetIntervalOption__Enum__Class>(type_info, "PlayFab.PlayStreamModels", "StatisticResetIntervalOption");
        }
        inline app::StatisticResetIntervalOption__Enum* create() {
            return il2cpp::create_object<app::StatisticResetIntervalOption__Enum>(get_class());
        }
    } // namespace StatisticResetIntervalOption__Enum
} // namespace app::classes::types
