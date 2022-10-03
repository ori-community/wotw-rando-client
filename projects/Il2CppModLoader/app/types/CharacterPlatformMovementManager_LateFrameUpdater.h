#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterPlatformMovementManager_LateFrameUpdater {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharacterPlatformMovementManager_LateFrameUpdater__Class** type_info;
        inline app::CharacterPlatformMovementManager_LateFrameUpdater__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterPlatformMovementManager_LateFrameUpdater__Class>(type_info, "", "CharacterPlatformMovementManager", "LateFrameUpdater");
        }
        inline app::CharacterPlatformMovementManager_LateFrameUpdater* create() {
            return il2cpp::create_object<app::CharacterPlatformMovementManager_LateFrameUpdater>(get_class());
        }
    } // namespace CharacterPlatformMovementManager_LateFrameUpdater
} // namespace app::classes::types
