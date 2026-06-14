#pragma once
#include <Modloader/app/structs/StatisticNameVersion__Array.h>
#include <Modloader/app/structs/StatisticNameVersion__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticNameVersion__Array {
        inline app::StatisticNameVersion__Array__Class** type_info() {
            static app::StatisticNameVersion__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatisticNameVersion__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatisticNameVersion__Array__Class* get_class() {
            return il2cpp::get_class<app::StatisticNameVersion__Array__Class>(type_info(), "PlayFab.ClientModels", "StatisticNameVersion[]");
        }
        inline app::StatisticNameVersion__Array* create() {
            return il2cpp::create_object<app::StatisticNameVersion__Array>(get_class());
        }
    } // namespace StatisticNameVersion__Array
} // namespace app::classes::types
