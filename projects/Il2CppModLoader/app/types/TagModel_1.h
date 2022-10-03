#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TagModel_1 {
        namespace {
            app::TagModel_1__Class* type_info_ref = nullptr;
        }
        app::TagModel_1__Class** type_info = &type_info_ref;
        inline app::TagModel_1__Class* get_class() {
            return il2cpp::get_class<app::TagModel_1__Class>(type_info, "PlayFab.ServerModels", "TagModel");
        }
        inline app::TagModel_1* create() {
            return il2cpp::create_object<app::TagModel_1>(get_class());
        }
        inline app::TagModel_1__Array* create_array(int size) {
            return il2cpp::array_new<app::TagModel_1__Array>(get_class(), size);
        }
    } // namespace TagModel_1
} // namespace app::classes::types
