#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSkillUpDownDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinSkillUpDownDebugMenuItem__Class** type_info;
        inline app::SeinSkillUpDownDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::SeinSkillUpDownDebugMenuItem__Class>(type_info, "", "SeinSkillUpDownDebugMenuItem");
        }
        inline app::SeinSkillUpDownDebugMenuItem* create() {
            return il2cpp::create_object<app::SeinSkillUpDownDebugMenuItem>(get_class());
        }
    } // namespace SeinSkillUpDownDebugMenuItem
} // namespace app::classes::types
