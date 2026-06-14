#pragma once
#include <Modloader/app/structs/MembershipModel.h>
#include <Modloader/app/structs/MembershipModel__Array.h>
#include <Modloader/app/structs/MembershipModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MembershipModel {
        inline app::MembershipModel__Class** type_info() {
            static app::MembershipModel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MembershipModel__Class**)(modloader::win::memory::resolve_rva(0x0474EB08));
            }
            return cache;
        }
        inline app::MembershipModel__Class* get_class() {
            return il2cpp::get_class<app::MembershipModel__Class>(type_info(), "PlayFab.ClientModels", "MembershipModel");
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
