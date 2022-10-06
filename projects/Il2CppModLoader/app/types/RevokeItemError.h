#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RevokeItemError {
        namespace {
            app::RevokeItemError__Class* type_info_ref = nullptr;
        }
        app::RevokeItemError__Class** type_info = &type_info_ref;
        inline app::RevokeItemError__Class* get_class() {
            return il2cpp::get_class<app::RevokeItemError__Class>(type_info, "PlayFab.ServerModels", "RevokeItemError");
        }
        inline app::RevokeItemError* create() {
            return il2cpp::create_object<app::RevokeItemError>(get_class());
        }
        inline app::RevokeItemError__Array* create_array(int size) {
            return il2cpp::array_new<app::RevokeItemError__Array>(get_class(), size);
        }
        inline app::RevokeItemError__Array* create_array(const std::vector<app::RevokeItemError*>& items) {
            return il2cpp::array_new<app::RevokeItemError__Array>(get_class(), items);
        }
    } // namespace RevokeItemError
} // namespace app::classes::types
