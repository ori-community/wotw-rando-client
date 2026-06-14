#pragma once
#include <Modloader/app/structs/FollowRotationModifier__Enum.h>
#include <Modloader/app/structs/FollowRotationModifier__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FollowRotationModifier__Enum {
        inline app::FollowRotationModifier__Enum__Class** type_info() {
            static app::FollowRotationModifier__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FollowRotationModifier__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FollowRotationModifier__Enum__Class* get_class() {
            return il2cpp::get_class<app::FollowRotationModifier__Enum__Class>(type_info(), "Moon", "FollowRotationModifier");
        }
        inline app::FollowRotationModifier__Enum* create() {
            return il2cpp::create_object<app::FollowRotationModifier__Enum>(get_class());
        }
    } // namespace FollowRotationModifier__Enum
} // namespace app::classes::types
