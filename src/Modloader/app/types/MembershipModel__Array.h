#pragma once
#include <Modloader/app/structs/MembershipModel__Array.h>
#include <Modloader/app/structs/MembershipModel__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MembershipModel__Array {
        inline app::MembershipModel__Array__Class** type_info() {
            static app::MembershipModel__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MembershipModel__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MembershipModel__Array__Class* get_class() {
            return il2cpp::get_class<app::MembershipModel__Array__Class>(type_info(), "PlayFab.ClientModels", "MembershipModel[]");
        }
        inline app::MembershipModel__Array* create() {
            return il2cpp::create_object<app::MembershipModel__Array>(get_class());
        }
    } // namespace MembershipModel__Array
} // namespace app::classes::types
