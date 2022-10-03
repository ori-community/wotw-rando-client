#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContactEmailInfoModel_1 {
        namespace {
            app::ContactEmailInfoModel_1__Class* type_info_ref = nullptr;
        }
        app::ContactEmailInfoModel_1__Class** type_info = &type_info_ref;
        inline app::ContactEmailInfoModel_1__Class* get_class() {
            return il2cpp::get_class<app::ContactEmailInfoModel_1__Class>(type_info, "PlayFab.ServerModels", "ContactEmailInfoModel");
        }
        inline app::ContactEmailInfoModel_1* create() {
            return il2cpp::create_object<app::ContactEmailInfoModel_1>(get_class());
        }
        inline app::ContactEmailInfoModel_1__Array* create_array(int size) {
            return il2cpp::array_new<app::ContactEmailInfoModel_1__Array>(get_class(), size);
        }
    } // namespace ContactEmailInfoModel_1
} // namespace app::classes::types
