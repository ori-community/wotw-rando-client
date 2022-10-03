#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MembershipModel_1__Array {
        namespace {
            app::MembershipModel_1__Array__Class* type_info_ref = nullptr;
        }
        app::MembershipModel_1__Array__Class** type_info = &type_info_ref;
        inline app::MembershipModel_1__Array__Class* get_class() {
            return il2cpp::get_class<app::MembershipModel_1__Array__Class>(type_info, "PlayFab.ServerModels", "MembershipModel[]");
        }
        inline app::MembershipModel_1__Array* create() {
            return il2cpp::create_object<app::MembershipModel_1__Array>(get_class());
        }
    } // namespace MembershipModel_1__Array
} // namespace app::classes::types
