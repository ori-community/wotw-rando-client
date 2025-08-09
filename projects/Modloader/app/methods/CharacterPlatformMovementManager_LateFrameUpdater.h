#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterPlatformMovementManager.h>
#include <Modloader/app/structs/CharacterPlatformMovementManager_LateFrameUpdater.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::CharacterPlatformMovementManager_LateFrameUpdater {
    IL2CPP_REGISTER_METHOD(
        0x002FA490,
        void,
        ctor,
        app::CharacterPlatformMovementManager_LateFrameUpdater* this_ptr,
        app::CharacterPlatformMovementManager* owner
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::CharacterPlatformMovementManager*, get_Owner, app::CharacterPlatformMovementManager_LateFrameUpdater* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA490,
        void,
        set_Owner,
        app::CharacterPlatformMovementManager_LateFrameUpdater* this_ptr,
        app::CharacterPlatformMovementManager* value
    )
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, app::CharacterPlatformMovementManager_LateFrameUpdater* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013139A0, void, OnUpdate, app::CharacterPlatformMovementManager_LateFrameUpdater* this_ptr, float delta)
} // namespace app::classes::CharacterPlatformMovementManager_LateFrameUpdater
