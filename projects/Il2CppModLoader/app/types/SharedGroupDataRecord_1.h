#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SharedGroupDataRecord_1 {
        namespace {
            app::SharedGroupDataRecord_1__Class* type_info_ref = nullptr;
        }
        app::SharedGroupDataRecord_1__Class** type_info = &type_info_ref;
        inline app::SharedGroupDataRecord_1__Class* get_class() {
            return il2cpp::get_class<app::SharedGroupDataRecord_1__Class>(type_info, "PlayFab.ServerModels", "SharedGroupDataRecord");
        }
        inline app::SharedGroupDataRecord_1* create() {
            return il2cpp::create_object<app::SharedGroupDataRecord_1>(get_class());
        }
        inline app::SharedGroupDataRecord_1__Array* create_array(int size) {
            return il2cpp::array_new<app::SharedGroupDataRecord_1__Array>(get_class(), size);
        }
    } // namespace SharedGroupDataRecord_1
} // namespace app::classes::types
