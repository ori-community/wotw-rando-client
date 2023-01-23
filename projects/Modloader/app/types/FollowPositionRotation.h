#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FollowPositionRotation__Class.h>
#include <Modloader/app/structs/FollowPositionRotation.h>

namespace app::classes::types {
    namespace FollowPositionRotation {
        namespace {
            inline app::FollowPositionRotation__Class* type_info_ref = nullptr;
        }
        inline app::FollowPositionRotation__Class** type_info = &type_info_ref;
        inline app::FollowPositionRotation__Class* get_class() {
            return il2cpp::get_class<app::FollowPositionRotation__Class>(type_info, "", "FollowPositionRotation");
        }
        inline app::FollowPositionRotation* create() {
            return il2cpp::create_object<app::FollowPositionRotation>(get_class());
        }
    } // namespace FollowPositionRotation
} // namespace app::classes::types
