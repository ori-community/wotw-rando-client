#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FollowPositionModifier__Enum {
        namespace {
            inline app::FollowPositionModifier__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FollowPositionModifier__Enum__Class** type_info = &type_info_ref;
        inline app::FollowPositionModifier__Enum__Class* get_class() {
            return il2cpp::get_class<app::FollowPositionModifier__Enum__Class>(type_info, "Moon", "FollowPositionModifier");
        }
        inline app::FollowPositionModifier__Enum* create() {
            return il2cpp::create_object<app::FollowPositionModifier__Enum>(get_class());
        }
    } // namespace FollowPositionModifier__Enum
} // namespace app::classes::types
