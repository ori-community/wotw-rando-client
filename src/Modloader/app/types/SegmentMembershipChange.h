#pragma once
#include <Modloader/app/structs/SegmentMembershipChange.h>
#include <Modloader/app/structs/SegmentMembershipChange__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SegmentMembershipChange {
        inline app::SegmentMembershipChange__Class** type_info() {
            static app::SegmentMembershipChange__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SegmentMembershipChange__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SegmentMembershipChange__Class* get_class() {
            return il2cpp::get_class<app::SegmentMembershipChange__Class>(type_info(), "PlayFab.PlayStreamModels", "SegmentMembershipChange");
        }
        inline app::SegmentMembershipChange* create() {
            return il2cpp::create_object<app::SegmentMembershipChange>(get_class());
        }
    } // namespace SegmentMembershipChange
} // namespace app::classes::types
