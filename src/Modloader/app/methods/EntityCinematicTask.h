#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityCinematicData.h>
#include <Modloader/app/structs/EntityCinematicTask.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Nullable_1_Moon_BehaviourSystem_BehaviourStatus_.h>

namespace app::classes::EntityCinematicTask {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::EntityCinematicData*, get_Data, app::EntityCinematicTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Data, app::EntityCinematicTask* this_ptr, app::EntityCinematicData* value)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::BehaviourStatus__Enum, get_TaskStatus, app::EntityCinematicTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_TaskStatus, app::EntityCinematicTask* this_ptr, app::BehaviourStatus__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Nullable_1_Moon_BehaviourSystem_BehaviourStatus_, get_ForceReturnTaskStatus, app::EntityCinematicTask* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FB9E0,
        void,
        set_ForceReturnTaskStatus,
        app::EntityCinematicTask* this_ptr,
        app::Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ value
    )
    IL2CPP_REGISTER_METHOD(0x00C8CFF0, void, OnEntityInitialization, app::EntityCinematicTask* this_ptr, app::Entity* entity)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitializeTask, app::EntityCinematicTask* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00C8D030, void, OnEnterTask, app::EntityCinematicTask* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00C8D3F0, app::BehaviourStatus__Enum, OnExecuteTask, app::EntityCinematicTask* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00C8D420, void, OnExitTask, app::EntityCinematicTask* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00C8D650, void, OnResetTask, app::EntityCinematicTask* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00C8D6A0, void, ctor, app::EntityCinematicTask* this_ptr)
} // namespace app::classes::EntityCinematicTask
