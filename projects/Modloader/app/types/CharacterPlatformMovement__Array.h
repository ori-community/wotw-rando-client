#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterPlatformMovement__Array {
        inline app::CharacterPlatformMovement__Array__Class** type_info = (app::CharacterPlatformMovement__Array__Class**)(modloader::win::memory::resolve_rva(0x0472CA38));
        inline app::CharacterPlatformMovement__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterPlatformMovement__Array__Class>(type_info, "", "CharacterPlatformMovement[]");
        }
        inline app::CharacterPlatformMovement__Array* create() {
            return il2cpp::create_object<app::CharacterPlatformMovement__Array>(get_class());
        }
    } // namespace CharacterPlatformMovement__Array
} // namespace app::classes::types
