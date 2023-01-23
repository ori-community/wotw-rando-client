#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterPlatformMovementManager__Class.h>
#include <Modloader/app/structs/CharacterPlatformMovementManager.h>

namespace app::classes::types {
    namespace CharacterPlatformMovementManager {
        inline app::CharacterPlatformMovementManager__Class** type_info = (app::CharacterPlatformMovementManager__Class**)(modloader::win::memory::resolve_rva(0x04785BC8));
        inline app::CharacterPlatformMovementManager__Class* get_class() {
            return il2cpp::get_class<app::CharacterPlatformMovementManager__Class>(type_info, "", "CharacterPlatformMovementManager");
        }
        inline app::CharacterPlatformMovementManager* create() {
            return il2cpp::create_object<app::CharacterPlatformMovementManager>(get_class());
        }
    } // namespace CharacterPlatformMovementManager
} // namespace app::classes::types
