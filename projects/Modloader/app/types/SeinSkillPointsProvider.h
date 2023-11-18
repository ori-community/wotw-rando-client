#pragma once
#include <Modloader/app/structs/SeinSkillPointsProvider.h>
#include <Modloader/app/structs/SeinSkillPointsProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSkillPointsProvider {
        inline app::SeinSkillPointsProvider__Class** type_info() {
            static app::SeinSkillPointsProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSkillPointsProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSkillPointsProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinSkillPointsProvider__Class>(type_info(), "", "SeinSkillPointsProvider");
        }
        inline app::SeinSkillPointsProvider* create() {
            return il2cpp::create_object<app::SeinSkillPointsProvider>(get_class());
        }
    } // namespace SeinSkillPointsProvider
} // namespace app::classes::types
