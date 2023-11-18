#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/EntityOperationPermit__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/IUberStateModifierDataVirtualAnimator.h>
#include <Modloader/app/structs/SetupState.h>
#include <Modloader/app/structs/SetupStateModifier.h>
#include <Modloader/app/structs/StateControllerVirtualTimeline.h>

namespace app::classes::Moon::Timeline::StateControllerVirtualTimeline {
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::NewSetupStateController*, get_StateController, (app::StateControllerVirtualTimeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_StateController, (app::StateControllerVirtualTimeline * this_ptr, app::NewSetupStateController* value))
    IL2CPP_REGISTER_METHOD(0x01E82610, void, ctor, (app::StateControllerVirtualTimeline * this_ptr, app::NewSetupStateController* state_controller))
    IL2CPP_REGISTER_METHOD(0x01E82660, void, Reset, (app::StateControllerVirtualTimeline * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01E82720, app::EntityOperationPermit__Enum, OnBeforeAddChild, (app::StateControllerVirtualTimeline * this_ptr, app::ITimelineEntity* entity))
    IL2CPP_REGISTER_METHOD(0x01E82830, app::EntityId, CustomAddChild, (app::StateControllerVirtualTimeline * this_ptr, app::ITimelineEntity* entity))
    IL2CPP_REGISTER_METHOD(0x01E82A70, void, OnStateAdded, (app::StateControllerVirtualTimeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E82B10, void, OnModifierAdded, (app::StateControllerVirtualTimeline * this_ptr, app::IUberStateModifierDataVirtualAnimator* entity))
    IL2CPP_REGISTER_METHOD(0x01E82BE0, app::EntityOperationPermit__Enum, OnBeforeRemoveChild, (app::StateControllerVirtualTimeline * this_ptr, app::ITimelineEntity* entity))
    IL2CPP_REGISTER_METHOD(0x01E82D10, void, CustomRemoveChild, (app::StateControllerVirtualTimeline * this_ptr, app::EntityId id, app::ITimelineEntity* entity))
    IL2CPP_REGISTER_METHOD(0x01E82FF0, void, OnStateRemoved, (app::StateControllerVirtualTimeline * this_ptr, app::SetupState* state))
    IL2CPP_REGISTER_METHOD(0x01E83020, void, OnModifierRemoved, (app::StateControllerVirtualTimeline * this_ptr, app::SetupStateModifier* modifier))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RebuildHierarchy, (app::StateControllerVirtualTimeline * this_ptr))
} // namespace app::classes::Moon::Timeline::StateControllerVirtualTimeline
