#pragma once
#include <Modloader/app/structs/StatisticModel__Array.h>
#include <Modloader/app/structs/StatisticModel__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticModel__Array {
        inline app::StatisticModel__Array__Class** type_info() {
            static app::StatisticModel__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatisticModel__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatisticModel__Array__Class* get_class() {
            return il2cpp::get_class<app::StatisticModel__Array__Class>(type_info(), "PlayFab.ClientModels", "StatisticModel[]");
        }
        inline app::StatisticModel__Array* create() {
            return il2cpp::create_object<app::StatisticModel__Array>(get_class());
        }
    } // namespace StatisticModel__Array
} // namespace app::classes::types
