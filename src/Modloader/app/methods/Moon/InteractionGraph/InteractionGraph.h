#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IInteractionNode.h>
#include <Modloader/app/structs/IInteractionNode__Array.h>
#include <Modloader/app/structs/InteractionGraph.h>
#include <Modloader/app/structs/StateMachine_1.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::Moon::InteractionGraph::InteractionGraph {
    IL2CPP_REGISTER_METHOD(0x0198D6D0, app::IInteractionNode*, get_ResolvedRootNode, app::InteractionGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0198D790, app::IInteractionNode*, get_CurrentActiveNode, app::InteractionGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsActive, app::InteractionGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsSuspended, app::InteractionGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006DC040, void, set_IsSuspended, app::InteractionGraph* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x006DC050, app::SuspendableMask__Enum, get_Mask, app::InteractionGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0198D820, void, set_Mask, app::InteractionGraph* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x0198D8D0, app::IInteractionNode__Array*, get_Nodes, app::InteractionGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0198D900, void, Finalize, app::InteractionGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0198D930, void, OnDestroy, app::InteractionGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0198D930, void, MoonCleanup, app::InteractionGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0198D950, app::IInteractionNode__Array*, GetNodes, app::InteractionGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0198DAB0, void, OnEnable, app::InteractionGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0198DB70, void, OnDisable, app::InteractionGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0198DC30, void, Start, app::InteractionGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0198DC40, void, OnUpdate, app::InteractionGraph* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x0198DF80, void, StartInteractionGraph, app::InteractionGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0198E2C0, void, StopInteractionGraph, app::InteractionGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0198E4A0, void, OnStateChanged, app::InteractionGraph* this_ptr, app::StateMachine_1* sm)
    IL2CPP_REGISTER_METHOD(0x0198E540, void, BuildStateMachine, app::InteractionGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, app::InteractionGraph* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0198EA10, void, ctor, app::InteractionGraph* this_ptr)
} // namespace app::classes::Moon::InteractionGraph::InteractionGraph
