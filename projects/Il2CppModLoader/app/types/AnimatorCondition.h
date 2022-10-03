#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatorCondition {
        namespace {
            app::AnimatorCondition__Class* type_info_ref = nullptr;
        }
        app::AnimatorCondition__Class** type_info = &type_info_ref;
        inline app::AnimatorCondition__Class* get_class() {
            return il2cpp::get_class<app::AnimatorCondition__Class>(type_info, "", "AnimatorCondition");
        }
        inline app::AnimatorCondition* create() {
            return il2cpp::create_object<app::AnimatorCondition>(get_class());
        }
    } // namespace AnimatorCondition
} // namespace app::classes::types
