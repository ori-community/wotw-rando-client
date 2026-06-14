#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/PhysicsDebugRecorder.h>
#include <Modloader/app/structs/Record.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PhysicsDebugTools::PhysicsDebugRecorder {
    IL2CPP_REGISTER_METHOD(0x014FCBA0, app::PhysicsDebugRecorder*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x014FCC40, void, set_Instance, app::PhysicsDebugRecorder* value)
    IL2CPP_REGISTER_METHOD(
        0x014FCCF0,
        void,
        RecordEvent,
        app::PhysicsDebugRecorder* this_ptr,
        app::Entity* target,
        app::CharacterPlatformMovement* movement_compoenent,
        app::Vector3 target_velocity,
        app::String* event_description
    )
    IL2CPP_REGISTER_METHOD(0x014FCFA0, void, LateUpdate, app::PhysicsDebugRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014FCFC0, void, ProgressFrame, app::PhysicsDebugRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014FD1A0, void, RecordFrame, app::PhysicsDebugRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AddRecordEntry, app::PhysicsDebugRecorder* this_ptr, app::Record* record, app::Entity* entity)
    IL2CPP_REGISTER_METHOD(0x014FD6F0, void, OnDestroy, app::PhysicsDebugRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014FD820, void, OnDrawGizmos, app::PhysicsDebugRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014FDAB0, void, ctor, app::PhysicsDebugRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::PhysicsDebugTools::PhysicsDebugRecorder
