#pragma once
#include <Modloader/app/structs/SegmentMembershipChangeType__Enum.h>
#include <Modloader/app/structs/SegmentMembershipChangeType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SegmentMembershipChangeType__Enum {
        inline app::SegmentMembershipChangeType__Enum__Class** type_info() {
            static app::SegmentMembershipChangeType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SegmentMembershipChangeType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SegmentMembershipChangeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SegmentMembershipChangeType__Enum__Class>(type_info(), "PlayFab.PlayStreamModels", "SegmentMembershipChangeType");
        }
        inline app::SegmentMembershipChangeType__Enum* create() {
            return il2cpp::create_object<app::SegmentMembershipChangeType__Enum>(get_class());
        }
    } // namespace SegmentMembershipChangeType__Enum
} // namespace app::classes::types
