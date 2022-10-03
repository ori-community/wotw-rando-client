#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContactEmailInfo_1 {
        namespace {
            app::ContactEmailInfo_1__Class* type_info_ref = nullptr;
        }
        app::ContactEmailInfo_1__Class** type_info = &type_info_ref;
        inline app::ContactEmailInfo_1__Class* get_class() {
            return il2cpp::get_class<app::ContactEmailInfo_1__Class>(type_info, "PlayFab.PlayStreamModels", "ContactEmailInfo");
        }
        inline app::ContactEmailInfo_1* create() {
            return il2cpp::create_object<app::ContactEmailInfo_1>(get_class());
        }
        inline app::ContactEmailInfo_1__Array* create_array(int size) {
            return il2cpp::array_new<app::ContactEmailInfo_1__Array>(get_class(), size);
        }
    } // namespace ContactEmailInfo_1
} // namespace app::classes::types
