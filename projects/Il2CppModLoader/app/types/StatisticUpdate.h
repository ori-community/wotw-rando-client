#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticUpdate {
        namespace {
            app::StatisticUpdate__Class* type_info_ref = nullptr;
        }
        app::StatisticUpdate__Class** type_info = &type_info_ref;
        inline app::StatisticUpdate__Class* get_class() {
            return il2cpp::get_class<app::StatisticUpdate__Class>(type_info, "PlayFab.ClientModels", "StatisticUpdate");
        }
        inline app::StatisticUpdate* create() {
            return il2cpp::create_object<app::StatisticUpdate>(get_class());
        }
        inline app::StatisticUpdate__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticUpdate__Array>(get_class(), size);
        }
    } // namespace StatisticUpdate
} // namespace app::classes::types
