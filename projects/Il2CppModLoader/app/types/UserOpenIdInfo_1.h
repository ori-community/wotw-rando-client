#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserOpenIdInfo_1 {
        namespace {
            app::UserOpenIdInfo_1__Class* type_info_ref = nullptr;
        }
        app::UserOpenIdInfo_1__Class** type_info = &type_info_ref;
        inline app::UserOpenIdInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserOpenIdInfo_1__Class>(type_info, "PlayFab.ServerModels", "UserOpenIdInfo");
        }
        inline app::UserOpenIdInfo_1* create() {
            return il2cpp::create_object<app::UserOpenIdInfo_1>(get_class());
        }
        inline app::UserOpenIdInfo_1__Array* create_array(int size) {
            return il2cpp::array_new<app::UserOpenIdInfo_1__Array>(get_class(), size);
        }
    } // namespace UserOpenIdInfo_1
} // namespace app::classes::types
