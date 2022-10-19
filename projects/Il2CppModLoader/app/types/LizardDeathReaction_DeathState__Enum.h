#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LizardDeathReaction_DeathState__Enum {
        namespace {
            inline app::LizardDeathReaction_DeathState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LizardDeathReaction_DeathState__Enum__Class** type_info = &type_info_ref;
        inline app::LizardDeathReaction_DeathState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LizardDeathReaction_DeathState__Enum__Class>(type_info, "", "LizardDeathReaction", "DeathState");
        }
        inline app::LizardDeathReaction_DeathState__Enum* create() {
            return il2cpp::create_object<app::LizardDeathReaction_DeathState__Enum>(get_class());
        }
    } // namespace LizardDeathReaction_DeathState__Enum
} // namespace app::classes::types
