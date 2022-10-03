#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterPlatformMovement_AirSuspension {
        namespace {
            app::CharacterPlatformMovement_AirSuspension__Class* type_info_ref = nullptr;
        }
        app::CharacterPlatformMovement_AirSuspension__Class** type_info = &type_info_ref;
        inline app::CharacterPlatformMovement_AirSuspension__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterPlatformMovement_AirSuspension__Class>(type_info, "", "CharacterPlatformMovement", "AirSuspension");
        }
        inline app::CharacterPlatformMovement_AirSuspension* create() {
            return il2cpp::create_object<app::CharacterPlatformMovement_AirSuspension>(get_class());
        }
    } // namespace CharacterPlatformMovement_AirSuspension
} // namespace app::classes::types
