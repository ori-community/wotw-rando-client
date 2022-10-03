#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SlugKickupHitBehaviour_KickupState__Enum {
        namespace {
            app::SlugKickupHitBehaviour_KickupState__Enum__Class* type_info_ref = nullptr;
        }
        app::SlugKickupHitBehaviour_KickupState__Enum__Class** type_info = &type_info_ref;
        inline app::SlugKickupHitBehaviour_KickupState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SlugKickupHitBehaviour_KickupState__Enum__Class>(type_info, "", "SlugKickupHitBehaviour", "KickupState");
        }
        inline app::SlugKickupHitBehaviour_KickupState__Enum* create() {
            return il2cpp::create_object<app::SlugKickupHitBehaviour_KickupState__Enum>(get_class());
        }
    } // namespace SlugKickupHitBehaviour_KickupState__Enum
} // namespace app::classes::types
