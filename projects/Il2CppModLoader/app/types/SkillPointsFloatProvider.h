#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkillPointsFloatProvider {
        namespace {
            app::SkillPointsFloatProvider__Class* type_info_ref = nullptr;
        }
        app::SkillPointsFloatProvider__Class** type_info = &type_info_ref;
        inline app::SkillPointsFloatProvider__Class* get_class() {
            return il2cpp::get_class<app::SkillPointsFloatProvider__Class>(type_info, "", "SkillPointsFloatProvider");
        }
        inline app::SkillPointsFloatProvider* create() {
            return il2cpp::create_object<app::SkillPointsFloatProvider>(get_class());
        }
    } // namespace SkillPointsFloatProvider
} // namespace app::classes::types
