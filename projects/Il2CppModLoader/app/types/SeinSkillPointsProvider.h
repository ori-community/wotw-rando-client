#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSkillPointsProvider {
        namespace {
            app::SeinSkillPointsProvider__Class* type_info_ref = nullptr;
        }
        app::SeinSkillPointsProvider__Class** type_info = &type_info_ref;
        inline app::SeinSkillPointsProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinSkillPointsProvider__Class>(type_info, "", "SeinSkillPointsProvider");
        }
        inline app::SeinSkillPointsProvider* create() {
            return il2cpp::create_object<app::SeinSkillPointsProvider>(get_class());
        }
    } // namespace SeinSkillPointsProvider
} // namespace app::classes::types
