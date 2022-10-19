#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerIsNotDiggingCondition {
        namespace {
            inline app::PlayerIsNotDiggingCondition__Class* type_info_ref = nullptr;
        }
        inline app::PlayerIsNotDiggingCondition__Class** type_info = &type_info_ref;
        inline app::PlayerIsNotDiggingCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerIsNotDiggingCondition__Class>(type_info, "", "PlayerIsNotDiggingCondition");
        }
        inline app::PlayerIsNotDiggingCondition* create() {
            return il2cpp::create_object<app::PlayerIsNotDiggingCondition>(get_class());
        }
    } // namespace PlayerIsNotDiggingCondition
} // namespace app::classes::types
