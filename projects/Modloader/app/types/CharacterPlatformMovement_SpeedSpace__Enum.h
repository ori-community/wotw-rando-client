#pragma once
#include <Modloader/app/structs/CharacterPlatformMovement_SpeedSpace__Enum.h>
#include <Modloader/app/structs/CharacterPlatformMovement_SpeedSpace__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterPlatformMovement_SpeedSpace__Enum {
        inline app::CharacterPlatformMovement_SpeedSpace__Enum__Class** type_info() {
            static app::CharacterPlatformMovement_SpeedSpace__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterPlatformMovement_SpeedSpace__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterPlatformMovement_SpeedSpace__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterPlatformMovement_SpeedSpace__Enum__Class>(type_info(), "", "CharacterPlatformMovement", "SpeedSpace");
        }
        inline app::CharacterPlatformMovement_SpeedSpace__Enum* create() {
            return il2cpp::create_object<app::CharacterPlatformMovement_SpeedSpace__Enum>(get_class());
        }
    } // namespace CharacterPlatformMovement_SpeedSpace__Enum
} // namespace app::classes::types
