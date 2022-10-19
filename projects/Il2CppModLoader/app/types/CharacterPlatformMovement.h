#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterPlatformMovement {
        inline app::CharacterPlatformMovement__Class** type_info = (app::CharacterPlatformMovement__Class**)(modloader::win::memory::resolve_rva(0x0472B818));
        inline app::CharacterPlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::CharacterPlatformMovement__Class>(type_info, "", "CharacterPlatformMovement");
        }
        inline app::CharacterPlatformMovement* create() {
            return il2cpp::create_object<app::CharacterPlatformMovement>(get_class());
        }
        inline app::CharacterPlatformMovement__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterPlatformMovement__Array>(get_class(), size);
        }
        inline app::CharacterPlatformMovement__Array* create_array(const std::vector<app::CharacterPlatformMovement*>& items) {
            return il2cpp::array_new<app::CharacterPlatformMovement__Array>(get_class(), items);
        }
    } // namespace CharacterPlatformMovement
} // namespace app::classes::types
