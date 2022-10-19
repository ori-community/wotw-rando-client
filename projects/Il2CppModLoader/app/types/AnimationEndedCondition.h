#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationEndedCondition {
        namespace {
            inline app::AnimationEndedCondition__Class* type_info_ref = nullptr;
        }
        inline app::AnimationEndedCondition__Class** type_info = &type_info_ref;
        inline app::AnimationEndedCondition__Class* get_class() {
            return il2cpp::get_class<app::AnimationEndedCondition__Class>(type_info, "fsm", "AnimationEndedCondition");
        }
        inline app::AnimationEndedCondition* create() {
            return il2cpp::create_object<app::AnimationEndedCondition>(get_class());
        }
    } // namespace AnimationEndedCondition
} // namespace app::classes::types
