#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HasEnoughExperienceCondition {
        namespace {
            inline app::HasEnoughExperienceCondition__Class* type_info_ref = nullptr;
        }
        inline app::HasEnoughExperienceCondition__Class** type_info = &type_info_ref;
        inline app::HasEnoughExperienceCondition__Class* get_class() {
            return il2cpp::get_class<app::HasEnoughExperienceCondition__Class>(type_info, "", "HasEnoughExperienceCondition");
        }
        inline app::HasEnoughExperienceCondition* create() {
            return il2cpp::create_object<app::HasEnoughExperienceCondition>(get_class());
        }
    } // namespace HasEnoughExperienceCondition
} // namespace app::classes::types
