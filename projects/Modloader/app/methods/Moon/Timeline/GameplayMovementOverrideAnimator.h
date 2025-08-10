#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationSwapSet.h>
#include <Modloader/app/structs/CharacterGravity.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/GameplayMovementOverrideAnimator.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/UpdateCategory__Enum.h>

namespace app::classes::Moon::Timeline::GameplayMovementOverrideAnimator {
    IL2CPP_REGISTER_METHOD(0x0076D140, void, OnStartPlayback, app::GameplayMovementOverrideAnimator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(
        0x0076D150,
        void,
        ModifyGravityPlatformMovementSettings,
        app::GameplayMovementOverrideAnimator* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x00417920, app::UpdateCategory__Enum, get_UpdateCategory, app::GameplayMovementOverrideAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076D1A0, app::CharacterGravity*, get_Gravity, app::GameplayMovementOverrideAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076D2D0, app::CharacterLeftRightMovement*, get_LeftRightMovement, app::GameplayMovementOverrideAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076D400, app::AnimationSwapSet*, get_CurrentSet, app::GameplayMovementOverrideAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076D4D0, bool, get_BlockTurning, app::GameplayMovementOverrideAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076D660, void, OnDisable, app::GameplayMovementOverrideAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076D670, void, OnDestroy, app::GameplayMovementOverrideAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076D690, void, UnsubscribeFromEvents, app::GameplayMovementOverrideAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0076D940,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::GameplayMovementOverrideAnimator* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x0076DD10, void, OnStopPlayback, app::GameplayMovementOverrideAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076DF80, void, OnUpdateEntity, app::GameplayMovementOverrideAnimator* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x0076E630, void, ctor, app::GameplayMovementOverrideAnimator* this_ptr)
} // namespace app::classes::Moon::Timeline::GameplayMovementOverrideAnimator
