#pragma once
#include <Modloader/app/structs/SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array {
        inline app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array__Class** type_info() {
            static app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array__Class>(type_info(), "", "SeinAbilityRestrictZone+LerpedHorizontalMovementSetting[]");
        }
        inline app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array* create() {
            return il2cpp::create_object<app::SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array>(get_class());
        }
    } // namespace SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array
} // namespace app::classes::types
