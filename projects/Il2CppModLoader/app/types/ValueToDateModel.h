#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValueToDateModel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValueToDateModel__Class** type_info;
        inline app::ValueToDateModel__Class* get_class() {
            return il2cpp::get_class<app::ValueToDateModel__Class>(type_info, "PlayFab.ClientModels", "ValueToDateModel");
        }
        inline app::ValueToDateModel* create() {
            return il2cpp::create_object<app::ValueToDateModel>(get_class());
        }
        inline app::ValueToDateModel__Array* create_array(int size) {
            return il2cpp::array_new<app::ValueToDateModel__Array>(get_class(), size);
        }
    } // namespace ValueToDateModel
} // namespace app::classes::types
