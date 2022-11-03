#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MembershipModel {
        inline app::MembershipModel__Class** type_info = (app::MembershipModel__Class**)(modloader::win::memory::resolve_rva(0x0474EB08));
        inline app::MembershipModel__Class* get_class() {
            return il2cpp::get_class<app::MembershipModel__Class>(type_info, "PlayFab.ClientModels", "MembershipModel");
        }
        inline app::MembershipModel* create() {
            return il2cpp::create_object<app::MembershipModel>(get_class());
        }
        inline app::MembershipModel__Array* create_array(int size) {
            return il2cpp::array_new<app::MembershipModel__Array>(get_class(), size);
        }
        inline app::MembershipModel__Array* create_array(const std::vector<app::MembershipModel*>& items) {
            return il2cpp::array_new<app::MembershipModel__Array>(get_class(), items);
        }
    } // namespace MembershipModel
} // namespace app::classes::types
