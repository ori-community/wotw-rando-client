#pragma once
#include <Modloader/app/structs/CharacterPlatformMovementManager_LateFrameUpdater.h>
#include <Modloader/app/structs/CharacterPlatformMovementManager_LateFrameUpdater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterPlatformMovementManager_LateFrameUpdater {
        inline app::CharacterPlatformMovementManager_LateFrameUpdater__Class** type_info() {
            static app::CharacterPlatformMovementManager_LateFrameUpdater__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharacterPlatformMovementManager_LateFrameUpdater__Class**)(modloader::win::memory::resolve_rva(0x04779B80));
            }
            return cache;
        }
        inline app::CharacterPlatformMovementManager_LateFrameUpdater__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterPlatformMovementManager_LateFrameUpdater__Class>(type_info(), "", "CharacterPlatformMovementManager", "LateFrameUpdater");
        }
        inline app::CharacterPlatformMovementManager_LateFrameUpdater* create() {
            return il2cpp::create_object<app::CharacterPlatformMovementManager_LateFrameUpdater>(get_class());
        }
    } // namespace CharacterPlatformMovementManager_LateFrameUpdater
} // namespace app::classes::types
