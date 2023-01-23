#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterPlatformMovement_c__Class.h>
#include <Modloader/app/structs/CharacterPlatformMovement_c.h>

namespace app::classes::types {
    namespace CharacterPlatformMovement_c {
        inline app::CharacterPlatformMovement_c__Class** type_info = (app::CharacterPlatformMovement_c__Class**)(modloader::win::memory::resolve_rva(0x0472CFE0));
        inline app::CharacterPlatformMovement_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterPlatformMovement_c__Class>(type_info, "", "CharacterPlatformMovement", "<>c");
        }
        inline app::CharacterPlatformMovement_c* create() {
            return il2cpp::create_object<app::CharacterPlatformMovement_c>(get_class());
        }
    } // namespace CharacterPlatformMovement_c
} // namespace app::classes::types
