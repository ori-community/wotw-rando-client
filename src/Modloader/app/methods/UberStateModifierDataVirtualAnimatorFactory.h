#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/SetupStateModifier.h>
#include <Modloader/app/structs/SetupStateModifierDataType__Enum.h>
#include <Modloader/app/structs/UberStateModifierDataVirtualAnimatorFactory.h>
#include <Modloader/app/structs/VirtualTimelineEntityPool.h>

namespace app::classes::UberStateModifierDataVirtualAnimatorFactory {
    IL2CPP_REGISTER_METHOD(
        0x01E96370,
        app::ITimelineEntity*,
        CreateAnimatorForType,
        app::SetupStateModifierDataType__Enum type,
        app::NewSetupStateController* state_controller,
        app::SetupStateModifier* modifier,
        int32_t state_guid,
        app::VirtualTimelineEntityPool* pool
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UberStateModifierDataVirtualAnimatorFactory* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x018F0180,
        app::ITimelineEntity*,
        CreateAnimtorInternal_1,
        app::NewSetupStateController* state_controller,
        app::SetupStateModifier* modifier,
        int32_t state_guid,
        app::VirtualTimelineEntityPool* pool
    )
    IL2CPP_REGISTER_METHOD(
        0x018F0180,
        app::ITimelineEntity*,
        CreateAnimtorInternal_2,
        app::NewSetupStateController* state_controller,
        app::SetupStateModifier* modifier,
        int32_t state_guid,
        app::VirtualTimelineEntityPool* pool
    )
    IL2CPP_REGISTER_METHOD(
        0x018F0180,
        app::ITimelineEntity*,
        CreateAnimtorInternal_3,
        app::NewSetupStateController* state_controller,
        app::SetupStateModifier* modifier,
        int32_t state_guid,
        app::VirtualTimelineEntityPool* pool
    )
    IL2CPP_REGISTER_METHOD(
        0x018F0180,
        app::ITimelineEntity*,
        CreateAnimtorInternal_4,
        app::NewSetupStateController* state_controller,
        app::SetupStateModifier* modifier,
        int32_t state_guid,
        app::VirtualTimelineEntityPool* pool
    )
    IL2CPP_REGISTER_METHOD(
        0x018F0180,
        app::ITimelineEntity*,
        CreateAnimtorInternal_5,
        app::NewSetupStateController* state_controller,
        app::SetupStateModifier* modifier,
        int32_t state_guid,
        app::VirtualTimelineEntityPool* pool
    )
    IL2CPP_REGISTER_METHOD(
        0x018F0180,
        app::ITimelineEntity*,
        CreateAnimtorInternal_6,
        app::NewSetupStateController* state_controller,
        app::SetupStateModifier* modifier,
        int32_t state_guid,
        app::VirtualTimelineEntityPool* pool
    )
    IL2CPP_REGISTER_METHOD(
        0x018F0180,
        app::ITimelineEntity*,
        CreateAnimtorInternal_7,
        app::NewSetupStateController* state_controller,
        app::SetupStateModifier* modifier,
        int32_t state_guid,
        app::VirtualTimelineEntityPool* pool
    )
} // namespace app::classes::UberStateModifierDataVirtualAnimatorFactory
