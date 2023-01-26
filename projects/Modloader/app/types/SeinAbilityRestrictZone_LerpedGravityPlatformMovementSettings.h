#pragma once
#include <Modloader/app/structs/SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Boxed.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings {
        inline app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Class** type_info() {
            static app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Class>(type_info(), "", "SeinAbilityRestrictZone", "LerpedGravityPlatformMovementSettings");
        }
        inline app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings* create() {
            return il2cpp::create_object<app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings>(get_class());
        }
        inline app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Boxed* box(app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings value) {
            return il2cpp::box_value<app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Boxed>(get_class(), value);
        }
        inline app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array>(get_class(), size);
        }
        inline app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array* create_array(const std::vector<app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings>& items) {
            return il2cpp::array_new<app::SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array>(get_class(), items);
        }
    } // namespace SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings
} // namespace app::classes::types
