#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CheckpointFunctionality__Boxed.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::CheckpointFunctionality {
    IL2CPP_REGISTER_METHOD(0x00126240, bool, IsManualPositionMode, app::CheckpointFunctionality__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010FB00, bool, ShouldRefillHealthAndEnergy, app::CheckpointFunctionality__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00126250, app::Vector2, get_ManualPosition, app::CheckpointFunctionality__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00126260, void, CreateCheckpoint_1, app::CheckpointFunctionality__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00126270, void, CreateCheckpoint_2, app::CheckpointFunctionality__Boxed* this_ptr, bool do_perform_save)
    IL2CPP_REGISTER_METHOD(
        0x00126280,
        void,
        CreateCheckpoint_3,
        app::CheckpointFunctionality__Boxed* this_ptr,
        bool do_perform_save,
        bool respect_restrict_checkpoint_zone
    )
    IL2CPP_REGISTER_METHOD(0x0010D3A0, void, Reset, app::CheckpointFunctionality__Boxed* this_ptr, app::Transform* owner_transform)
    IL2CPP_REGISTER_METHOD(0x00126290, void, OnDrawGizmosSelected, app::CheckpointFunctionality__Boxed* this_ptr)
} // namespace app::classes::CheckpointFunctionality
