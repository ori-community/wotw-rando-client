#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterPlatformMovement_AirSuspension__Class.h>
#include <Modloader/app/structs/CharacterPlatformMovement_AirSuspension.h>

namespace app::classes::types {
    namespace CharacterPlatformMovement_AirSuspension {
        namespace {
            inline app::CharacterPlatformMovement_AirSuspension__Class* type_info_ref = nullptr;
        }
        inline app::CharacterPlatformMovement_AirSuspension__Class** type_info = &type_info_ref;
        inline app::CharacterPlatformMovement_AirSuspension__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterPlatformMovement_AirSuspension__Class>(type_info, "", "CharacterPlatformMovement", "AirSuspension");
        }
        inline app::CharacterPlatformMovement_AirSuspension* create() {
            return il2cpp::create_object<app::CharacterPlatformMovement_AirSuspension>(get_class());
        }
    } // namespace CharacterPlatformMovement_AirSuspension
} // namespace app::classes::types
