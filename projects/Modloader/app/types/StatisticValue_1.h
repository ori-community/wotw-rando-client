#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StatisticValue_1__Class.h>
#include <Modloader/app/structs/StatisticValue_1.h>
#include <Modloader/app/structs/StatisticValue_1__Array.h>

namespace app::classes::types {
    namespace StatisticValue_1 {
        namespace {
            inline app::StatisticValue_1__Class* type_info_ref = nullptr;
        }
        inline app::StatisticValue_1__Class** type_info = &type_info_ref;
        inline app::StatisticValue_1__Class* get_class() {
            return il2cpp::get_class<app::StatisticValue_1__Class>(type_info, "PlayFab.ServerModels", "StatisticValue");
        }
        inline app::StatisticValue_1* create() {
            return il2cpp::create_object<app::StatisticValue_1>(get_class());
        }
        inline app::StatisticValue_1__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticValue_1__Array>(get_class(), size);
        }
        inline app::StatisticValue_1__Array* create_array(const std::vector<app::StatisticValue_1*>& items) {
            return il2cpp::array_new<app::StatisticValue_1__Array>(get_class(), items);
        }
    } // namespace StatisticValue_1
} // namespace app::classes::types
