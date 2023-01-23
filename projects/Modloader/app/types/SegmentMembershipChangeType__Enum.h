#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SegmentMembershipChangeType__Enum__Class.h>
#include <Modloader/app/structs/SegmentMembershipChangeType__Enum.h>

namespace app::classes::types {
    namespace SegmentMembershipChangeType__Enum {
        namespace {
            inline app::SegmentMembershipChangeType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SegmentMembershipChangeType__Enum__Class** type_info = &type_info_ref;
        inline app::SegmentMembershipChangeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SegmentMembershipChangeType__Enum__Class>(type_info, "PlayFab.PlayStreamModels", "SegmentMembershipChangeType");
        }
        inline app::SegmentMembershipChangeType__Enum* create() {
            return il2cpp::create_object<app::SegmentMembershipChangeType__Enum>(get_class());
        }
    } // namespace SegmentMembershipChangeType__Enum
} // namespace app::classes::types
