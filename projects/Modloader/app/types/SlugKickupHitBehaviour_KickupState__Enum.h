#pragma once
#include <Modloader/app/structs/SlugKickupHitBehaviour_KickupState__Enum.h>
#include <Modloader/app/structs/SlugKickupHitBehaviour_KickupState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SlugKickupHitBehaviour_KickupState__Enum {
        inline app::SlugKickupHitBehaviour_KickupState__Enum__Class** type_info() {
            static app::SlugKickupHitBehaviour_KickupState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SlugKickupHitBehaviour_KickupState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SlugKickupHitBehaviour_KickupState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SlugKickupHitBehaviour_KickupState__Enum__Class>(type_info(), "", "SlugKickupHitBehaviour", "KickupState");
        }
        inline app::SlugKickupHitBehaviour_KickupState__Enum* create() {
            return il2cpp::create_object<app::SlugKickupHitBehaviour_KickupState__Enum>(get_class());
        }
    } // namespace SlugKickupHitBehaviour_KickupState__Enum
} // namespace app::classes::types
