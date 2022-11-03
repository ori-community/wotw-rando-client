#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatisticNameVersion_1 {
        namespace {
            inline app::StatisticNameVersion_1__Class* type_info_ref = nullptr;
        }
        inline app::StatisticNameVersion_1__Class** type_info = &type_info_ref;
        inline app::StatisticNameVersion_1__Class* get_class() {
            return il2cpp::get_class<app::StatisticNameVersion_1__Class>(type_info, "PlayFab.ServerModels", "StatisticNameVersion");
        }
        inline app::StatisticNameVersion_1* create() {
            return il2cpp::create_object<app::StatisticNameVersion_1>(get_class());
        }
        inline app::StatisticNameVersion_1__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticNameVersion_1__Array>(get_class(), size);
        }
        inline app::StatisticNameVersion_1__Array* create_array(const std::vector<app::StatisticNameVersion_1*>& items) {
            return il2cpp::array_new<app::StatisticNameVersion_1__Array>(get_class(), items);
        }
    } // namespace StatisticNameVersion_1
} // namespace app::classes::types
