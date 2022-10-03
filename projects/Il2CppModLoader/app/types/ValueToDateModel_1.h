#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValueToDateModel_1 {
        namespace {
            app::ValueToDateModel_1__Class* type_info_ref = nullptr;
        }
        app::ValueToDateModel_1__Class** type_info = &type_info_ref;
        inline app::ValueToDateModel_1__Class* get_class() {
            return il2cpp::get_class<app::ValueToDateModel_1__Class>(type_info, "PlayFab.ServerModels", "ValueToDateModel");
        }
        inline app::ValueToDateModel_1* create() {
            return il2cpp::create_object<app::ValueToDateModel_1>(get_class());
        }
        inline app::ValueToDateModel_1__Array* create_array(int size) {
            return il2cpp::array_new<app::ValueToDateModel_1__Array>(get_class(), size);
        }
    } // namespace ValueToDateModel_1
} // namespace app::classes::types
