#pragma once
#include <Modloader/app/structs/StatisticUpdate.h>
#include <Modloader/app/structs/StatisticUpdate__Array.h>
#include <Modloader/app/structs/StatisticUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticUpdate {
        inline app::StatisticUpdate__Class** type_info() {
            static app::StatisticUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatisticUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatisticUpdate__Class* get_class() {
            return il2cpp::get_class<app::StatisticUpdate__Class>(type_info(), "PlayFab.ClientModels", "StatisticUpdate");
        }
        inline app::StatisticUpdate* create() {
            return il2cpp::create_object<app::StatisticUpdate>(get_class());
        }
        inline app::StatisticUpdate__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticUpdate__Array>(get_class(), size);
        }
        inline app::StatisticUpdate__Array* create_array(const std::vector<app::StatisticUpdate*>& items) {
            return il2cpp::array_new<app::StatisticUpdate__Array>(get_class(), items);
        }
    } // namespace StatisticUpdate
} // namespace app::classes::types
