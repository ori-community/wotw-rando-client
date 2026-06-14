#pragma once
#include <Modloader/app/structs/MembershipModel_1.h>
#include <Modloader/app/structs/MembershipModel_1__Array.h>
#include <Modloader/app/structs/MembershipModel_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MembershipModel_1 {
        inline app::MembershipModel_1__Class** type_info() {
            static app::MembershipModel_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MembershipModel_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MembershipModel_1__Class* get_class() {
            return il2cpp::get_class<app::MembershipModel_1__Class>(type_info(), "PlayFab.ServerModels", "MembershipModel");
        }
        inline app::MembershipModel_1* create() {
            return il2cpp::create_object<app::MembershipModel_1>(get_class());
        }
        inline app::MembershipModel_1__Array* create_array(int size) {
            return il2cpp::array_new<app::MembershipModel_1__Array>(get_class(), size);
        }
        inline app::MembershipModel_1__Array* create_array(const std::vector<app::MembershipModel_1*>& items) {
            return il2cpp::array_new<app::MembershipModel_1__Array>(get_class(), items);
        }
    } // namespace MembershipModel_1
} // namespace app::classes::types
