#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerHasMapStoneFragmentCondition {
        namespace {
            app::PlayerHasMapStoneFragmentCondition__Class* type_info_ref = nullptr;
        }
        app::PlayerHasMapStoneFragmentCondition__Class** type_info = &type_info_ref;
        inline app::PlayerHasMapStoneFragmentCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerHasMapStoneFragmentCondition__Class>(type_info, "", "PlayerHasMapStoneFragmentCondition");
        }
        inline app::PlayerHasMapStoneFragmentCondition* create() {
            return il2cpp::create_object<app::PlayerHasMapStoneFragmentCondition>(get_class());
        }
    } // namespace PlayerHasMapStoneFragmentCondition
} // namespace app::classes::types
