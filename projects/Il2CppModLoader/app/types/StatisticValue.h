#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StatisticValue__Class** type_info;
        inline app::StatisticValue__Class* get_class() {
            return il2cpp::get_class<app::StatisticValue__Class>(type_info, "PlayFab.ClientModels", "StatisticValue");
        }
        inline app::StatisticValue* create() {
            return il2cpp::create_object<app::StatisticValue>(get_class());
        }
        inline app::StatisticValue__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticValue__Array>(get_class(), size);
        }
    } // namespace StatisticValue
} // namespace app::classes::types
