#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticUpdate_1__Array {
        namespace {
            app::StatisticUpdate_1__Array__Class* type_info_ref = nullptr;
        }
        app::StatisticUpdate_1__Array__Class** type_info = &type_info_ref;
        inline app::StatisticUpdate_1__Array__Class* get_class() {
            return il2cpp::get_class<app::StatisticUpdate_1__Array__Class>(type_info, "PlayFab.ServerModels", "StatisticUpdate[]");
        }
        inline app::StatisticUpdate_1__Array* create() {
            return il2cpp::create_object<app::StatisticUpdate_1__Array>(get_class());
        }
    } // namespace StatisticUpdate_1__Array
} // namespace app::classes::types
