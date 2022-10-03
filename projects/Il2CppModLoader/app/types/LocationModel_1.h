#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocationModel_1 {
        namespace {
            app::LocationModel_1__Class* type_info_ref = nullptr;
        }
        app::LocationModel_1__Class** type_info = &type_info_ref;
        inline app::LocationModel_1__Class* get_class() {
            return il2cpp::get_class<app::LocationModel_1__Class>(type_info, "PlayFab.ServerModels", "LocationModel");
        }
        inline app::LocationModel_1* create() {
            return il2cpp::create_object<app::LocationModel_1>(get_class());
        }
        inline app::LocationModel_1__Array* create_array(int size) {
            return il2cpp::array_new<app::LocationModel_1__Array>(get_class(), size);
        }
    } // namespace LocationModel_1
} // namespace app::classes::types
