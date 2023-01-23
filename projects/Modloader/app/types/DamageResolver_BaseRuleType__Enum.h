#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageResolver_BaseRuleType__Enum__Class.h>
#include <Modloader/app/structs/DamageResolver_BaseRuleType__Enum.h>

namespace app::classes::types {
    namespace DamageResolver_BaseRuleType__Enum {
        namespace {
            inline app::DamageResolver_BaseRuleType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DamageResolver_BaseRuleType__Enum__Class** type_info = &type_info_ref;
        inline app::DamageResolver_BaseRuleType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageResolver_BaseRuleType__Enum__Class>(type_info, "Moon", "DamageResolver", "BaseRuleType");
        }
        inline app::DamageResolver_BaseRuleType__Enum* create() {
            return il2cpp::create_object<app::DamageResolver_BaseRuleType__Enum>(get_class());
        }
    } // namespace DamageResolver_BaseRuleType__Enum
} // namespace app::classes::types
