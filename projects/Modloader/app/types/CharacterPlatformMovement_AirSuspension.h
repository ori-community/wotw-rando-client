#pragma once
#include <Modloader/app/structs/CharacterPlatformMovement_AirSuspension.h>
#include <Modloader/app/structs/CharacterPlatformMovement_AirSuspension__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterPlatformMovement_AirSuspension {
        inline app::CharacterPlatformMovement_AirSuspension__Class** type_info() {
            static app::CharacterPlatformMovement_AirSuspension__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterPlatformMovement_AirSuspension__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterPlatformMovement_AirSuspension__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterPlatformMovement_AirSuspension__Class>(type_info(), "", "CharacterPlatformMovement", "AirSuspension");
        }
        inline app::CharacterPlatformMovement_AirSuspension* create() {
            return il2cpp::create_object<app::CharacterPlatformMovement_AirSuspension>(get_class());
        }
    } // namespace CharacterPlatformMovement_AirSuspension
} // namespace app::classes::types
