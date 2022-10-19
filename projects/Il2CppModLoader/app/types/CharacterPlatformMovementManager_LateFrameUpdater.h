#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterPlatformMovementManager_LateFrameUpdater {
        inline app::CharacterPlatformMovementManager_LateFrameUpdater__Class** type_info = (app::CharacterPlatformMovementManager_LateFrameUpdater__Class**)(modloader::win::memory::resolve_rva(0x04779B80));
        inline app::CharacterPlatformMovementManager_LateFrameUpdater__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterPlatformMovementManager_LateFrameUpdater__Class>(type_info, "", "CharacterPlatformMovementManager", "LateFrameUpdater");
        }
        inline app::CharacterPlatformMovementManager_LateFrameUpdater* create() {
            return il2cpp::create_object<app::CharacterPlatformMovementManager_LateFrameUpdater>(get_class());
        }
    } // namespace CharacterPlatformMovementManager_LateFrameUpdater
} // namespace app::classes::types
