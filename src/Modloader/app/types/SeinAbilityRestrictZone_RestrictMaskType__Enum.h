#pragma once
#include <Modloader/app/structs/SeinAbilityRestrictZone_RestrictMaskType__Enum.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone_RestrictMaskType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinAbilityRestrictZone_RestrictMaskType__Enum {
        inline app::SeinAbilityRestrictZone_RestrictMaskType__Enum__Class** type_info() {
            static app::SeinAbilityRestrictZone_RestrictMaskType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinAbilityRestrictZone_RestrictMaskType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinAbilityRestrictZone_RestrictMaskType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinAbilityRestrictZone_RestrictMaskType__Enum__Class>(type_info(), "", "SeinAbilityRestrictZone", "RestrictMaskType");
        }
        inline app::SeinAbilityRestrictZone_RestrictMaskType__Enum* create() {
            return il2cpp::create_object<app::SeinAbilityRestrictZone_RestrictMaskType__Enum>(get_class());
        }
    } // namespace SeinAbilityRestrictZone_RestrictMaskType__Enum
} // namespace app::classes::types
