#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinAbilityEquippedCondition__Class.h>
#include <Modloader/app/structs/SeinAbilityEquippedCondition.h>

namespace app::classes::types {
    namespace SeinAbilityEquippedCondition {
        namespace {
            inline app::SeinAbilityEquippedCondition__Class* type_info_ref = nullptr;
        }
        inline app::SeinAbilityEquippedCondition__Class** type_info = &type_info_ref;
        inline app::SeinAbilityEquippedCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityEquippedCondition__Class>(type_info, "", "SeinAbilityEquippedCondition");
        }
        inline app::SeinAbilityEquippedCondition* create() {
            return il2cpp::create_object<app::SeinAbilityEquippedCondition>(get_class());
        }
    } // namespace SeinAbilityEquippedCondition
} // namespace app::classes::types
