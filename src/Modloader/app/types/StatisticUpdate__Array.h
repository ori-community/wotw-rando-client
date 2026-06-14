#pragma once
#include <Modloader/app/structs/StatisticUpdate__Array.h>
#include <Modloader/app/structs/StatisticUpdate__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticUpdate__Array {
        inline app::StatisticUpdate__Array__Class** type_info() {
            static app::StatisticUpdate__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatisticUpdate__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatisticUpdate__Array__Class* get_class() {
            return il2cpp::get_class<app::StatisticUpdate__Array__Class>(type_info(), "PlayFab.ClientModels", "StatisticUpdate[]");
        }
        inline app::StatisticUpdate__Array* create() {
            return il2cpp::create_object<app::StatisticUpdate__Array>(get_class());
        }
    } // namespace StatisticUpdate__Array
} // namespace app::classes::types
