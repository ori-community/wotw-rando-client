#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterPlatformMovement_SpeedSpace__Enum {
        namespace {
            inline app::CharacterPlatformMovement_SpeedSpace__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CharacterPlatformMovement_SpeedSpace__Enum__Class** type_info = &type_info_ref;
        inline app::CharacterPlatformMovement_SpeedSpace__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterPlatformMovement_SpeedSpace__Enum__Class>(type_info, "", "CharacterPlatformMovement", "SpeedSpace");
        }
        inline app::CharacterPlatformMovement_SpeedSpace__Enum* create() {
            return il2cpp::create_object<app::CharacterPlatformMovement_SpeedSpace__Enum>(get_class());
        }
    } // namespace CharacterPlatformMovement_SpeedSpace__Enum
} // namespace app::classes::types
