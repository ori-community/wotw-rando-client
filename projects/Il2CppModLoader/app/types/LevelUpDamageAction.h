#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LevelUpDamageAction {
        namespace {
            inline app::LevelUpDamageAction__Class* type_info_ref = nullptr;
        }
        inline app::LevelUpDamageAction__Class** type_info = &type_info_ref;
        inline app::LevelUpDamageAction__Class* get_class() {
            return il2cpp::get_class<app::LevelUpDamageAction__Class>(type_info, "", "LevelUpDamageAction");
        }
        inline app::LevelUpDamageAction* create() {
            return il2cpp::create_object<app::LevelUpDamageAction>(get_class());
        }
    } // namespace LevelUpDamageAction
} // namespace app::classes::types
