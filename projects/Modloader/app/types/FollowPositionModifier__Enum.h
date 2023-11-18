#pragma once
#include <Modloader/app/structs/FollowPositionModifier__Enum.h>
#include <Modloader/app/structs/FollowPositionModifier__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FollowPositionModifier__Enum {
        inline app::FollowPositionModifier__Enum__Class** type_info() {
            static app::FollowPositionModifier__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FollowPositionModifier__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FollowPositionModifier__Enum__Class* get_class() {
            return il2cpp::get_class<app::FollowPositionModifier__Enum__Class>(type_info(), "Moon", "FollowPositionModifier");
        }
        inline app::FollowPositionModifier__Enum* create() {
            return il2cpp::create_object<app::FollowPositionModifier__Enum>(get_class());
        }
    } // namespace FollowPositionModifier__Enum
} // namespace app::classes::types
