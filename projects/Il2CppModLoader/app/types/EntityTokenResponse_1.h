#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityTokenResponse_1 {
        namespace {
            app::EntityTokenResponse_1__Class* type_info_ref = nullptr;
        }
        app::EntityTokenResponse_1__Class** type_info = &type_info_ref;
        inline app::EntityTokenResponse_1__Class* get_class() {
            return il2cpp::get_class<app::EntityTokenResponse_1__Class>(type_info, "PlayFab.ServerModels", "EntityTokenResponse");
        }
        inline app::EntityTokenResponse_1* create() {
            return il2cpp::create_object<app::EntityTokenResponse_1>(get_class());
        }
    } // namespace EntityTokenResponse_1
} // namespace app::classes::types
