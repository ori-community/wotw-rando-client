#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SegmentMembershipChange {
        namespace {
            app::SegmentMembershipChange__Class* type_info_ref = nullptr;
        }
        app::SegmentMembershipChange__Class** type_info = &type_info_ref;
        inline app::SegmentMembershipChange__Class* get_class() {
            return il2cpp::get_class<app::SegmentMembershipChange__Class>(type_info, "PlayFab.PlayStreamModels", "SegmentMembershipChange");
        }
        inline app::SegmentMembershipChange* create() {
            return il2cpp::create_object<app::SegmentMembershipChange>(get_class());
        }
    } // namespace SegmentMembershipChange
} // namespace app::classes::types
