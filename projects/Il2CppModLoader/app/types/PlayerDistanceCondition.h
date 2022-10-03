#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerDistanceCondition {
        namespace {
            app::PlayerDistanceCondition__Class* type_info_ref = nullptr;
        }
        app::PlayerDistanceCondition__Class** type_info = &type_info_ref;
        inline app::PlayerDistanceCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerDistanceCondition__Class>(type_info, "", "PlayerDistanceCondition");
        }
        inline app::PlayerDistanceCondition* create() {
            return il2cpp::create_object<app::PlayerDistanceCondition>(get_class());
        }
    } // namespace PlayerDistanceCondition
} // namespace app::classes::types
