#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SegmentMembershipChange__Class.h>
#include <Modloader/app/structs/SegmentMembershipChange.h>

namespace app::classes::types {
    namespace SegmentMembershipChange {
        namespace {
            inline app::SegmentMembershipChange__Class* type_info_ref = nullptr;
        }
        inline app::SegmentMembershipChange__Class** type_info = &type_info_ref;
        inline app::SegmentMembershipChange__Class* get_class() {
            return il2cpp::get_class<app::SegmentMembershipChange__Class>(type_info, "PlayFab.PlayStreamModels", "SegmentMembershipChange");
        }
        inline app::SegmentMembershipChange* create() {
            return il2cpp::create_object<app::SegmentMembershipChange>(get_class());
        }
    } // namespace SegmentMembershipChange
} // namespace app::classes::types
