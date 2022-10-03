#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MembershipModel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MembershipModel__Class** type_info;
        inline app::MembershipModel__Class* get_class() {
            return il2cpp::get_class<app::MembershipModel__Class>(type_info, "PlayFab.ClientModels", "MembershipModel");
        }
        inline app::MembershipModel* create() {
            return il2cpp::create_object<app::MembershipModel>(get_class());
        }
        inline app::MembershipModel__Array* create_array(int size) {
            return il2cpp::array_new<app::MembershipModel__Array>(get_class(), size);
        }
    } // namespace MembershipModel
} // namespace app::classes::types
