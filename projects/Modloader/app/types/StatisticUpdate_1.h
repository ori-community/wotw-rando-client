#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatisticUpdate_1 {
        namespace {
            inline app::StatisticUpdate_1__Class* type_info_ref = nullptr;
        }
        inline app::StatisticUpdate_1__Class** type_info = &type_info_ref;
        inline app::StatisticUpdate_1__Class* get_class() {
            return il2cpp::get_class<app::StatisticUpdate_1__Class>(type_info, "PlayFab.ServerModels", "StatisticUpdate");
        }
        inline app::StatisticUpdate_1* create() {
            return il2cpp::create_object<app::StatisticUpdate_1>(get_class());
        }
        inline app::StatisticUpdate_1__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticUpdate_1__Array>(get_class(), size);
        }
        inline app::StatisticUpdate_1__Array* create_array(const std::vector<app::StatisticUpdate_1*>& items) {
            return il2cpp::array_new<app::StatisticUpdate_1__Array>(get_class(), items);
        }
    } // namespace StatisticUpdate_1
} // namespace app::classes::types
