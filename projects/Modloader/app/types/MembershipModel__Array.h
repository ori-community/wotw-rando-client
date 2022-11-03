#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MembershipModel__Array {
        namespace {
            inline app::MembershipModel__Array__Class* type_info_ref = nullptr;
        }
        inline app::MembershipModel__Array__Class** type_info = &type_info_ref;
        inline app::MembershipModel__Array__Class* get_class() {
            return il2cpp::get_class<app::MembershipModel__Array__Class>(type_info, "PlayFab.ClientModels", "MembershipModel[]");
        }
        inline app::MembershipModel__Array* create() {
            return il2cpp::create_object<app::MembershipModel__Array>(get_class());
        }
    } // namespace MembershipModel__Array
} // namespace app::classes::types
