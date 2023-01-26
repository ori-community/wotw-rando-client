#pragma once
#include <Modloader/app/structs/SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array {
        inline app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array__Class** type_info() {
            static app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array__Class>(type_info(), "", "SeinAbilityRestrictZone+LerpedGravityPlatformMovementSettings[]");
        }
        inline app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array* create() {
            return il2cpp::create_object<app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array>(get_class());
        }
    } // namespace SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array
} // namespace app::classes::types
