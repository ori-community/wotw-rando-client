#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticUpdate_1 {
        namespace {
            app::StatisticUpdate_1__Class* type_info_ref = nullptr;
        }
        app::StatisticUpdate_1__Class** type_info = &type_info_ref;
        inline app::StatisticUpdate_1__Class* get_class() {
            return il2cpp::get_class<app::StatisticUpdate_1__Class>(type_info, "PlayFab.ServerModels", "StatisticUpdate");
        }
        inline app::StatisticUpdate_1* create() {
            return il2cpp::create_object<app::StatisticUpdate_1>(get_class());
        }
        inline app::StatisticUpdate_1__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticUpdate_1__Array>(get_class(), size);
        }
    } // namespace StatisticUpdate_1
} // namespace app::classes::types
