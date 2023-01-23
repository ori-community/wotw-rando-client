#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LizardAttackEffects_Type__Enum__Class.h>
#include <Modloader/app/structs/LizardAttackEffects_Type__Enum.h>

namespace app::classes::types {
    namespace LizardAttackEffects_Type__Enum {
        namespace {
            inline app::LizardAttackEffects_Type__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LizardAttackEffects_Type__Enum__Class** type_info = &type_info_ref;
        inline app::LizardAttackEffects_Type__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LizardAttackEffects_Type__Enum__Class>(type_info, "", "LizardAttackEffects", "Type");
        }
        inline app::LizardAttackEffects_Type__Enum* create() {
            return il2cpp::create_object<app::LizardAttackEffects_Type__Enum>(get_class());
        }
    } // namespace LizardAttackEffects_Type__Enum
} // namespace app::classes::types
