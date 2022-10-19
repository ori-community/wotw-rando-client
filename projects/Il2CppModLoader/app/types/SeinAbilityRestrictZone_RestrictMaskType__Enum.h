#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinAbilityRestrictZone_RestrictMaskType__Enum {
        namespace {
            inline app::SeinAbilityRestrictZone_RestrictMaskType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinAbilityRestrictZone_RestrictMaskType__Enum__Class** type_info = &type_info_ref;
        inline app::SeinAbilityRestrictZone_RestrictMaskType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinAbilityRestrictZone_RestrictMaskType__Enum__Class>(type_info, "", "SeinAbilityRestrictZone", "RestrictMaskType");
        }
        inline app::SeinAbilityRestrictZone_RestrictMaskType__Enum* create() {
            return il2cpp::create_object<app::SeinAbilityRestrictZone_RestrictMaskType__Enum>(get_class());
        }
    } // namespace SeinAbilityRestrictZone_RestrictMaskType__Enum
} // namespace app::classes::types
