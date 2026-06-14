#pragma once
#include <Modloader/app/structs/CharacterPlatformMovement_ScheduledSpeedCurve__Array.h>
#include <Modloader/app/structs/CharacterPlatformMovement_ScheduledSpeedCurve__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterPlatformMovement_ScheduledSpeedCurve__Array {
        inline app::CharacterPlatformMovement_ScheduledSpeedCurve__Array__Class** type_info() {
            static app::CharacterPlatformMovement_ScheduledSpeedCurve__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterPlatformMovement_ScheduledSpeedCurve__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterPlatformMovement_ScheduledSpeedCurve__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterPlatformMovement_ScheduledSpeedCurve__Array__Class>(type_info(), "", "CharacterPlatformMovement+ScheduledSpeedCurve[]");
        }
        inline app::CharacterPlatformMovement_ScheduledSpeedCurve__Array* create() {
            return il2cpp::create_object<app::CharacterPlatformMovement_ScheduledSpeedCurve__Array>(get_class());
        }
    } // namespace CharacterPlatformMovement_ScheduledSpeedCurve__Array
} // namespace app::classes::types
