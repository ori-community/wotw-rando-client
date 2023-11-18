#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BuilderNPC_State__Enum.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityTask.h>
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/MinerBuilderDialogBehaviour.h>

namespace app::classes::MinerBuilderDialogBehaviour {
    IL2CPP_REGISTER_METHOD(0x008519C0, app::BuilderNPC_State__Enum, get_DialogState, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519D0, void, set_DialogState, (app::MinerBuilderDialogBehaviour * this_ptr, app::BuilderNPC_State__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014461C0, void, OnExecute, (app::MinerBuilderDialogBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x01446460, void, OnEndBehaviour, (app::MinerBuilderDialogBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x01446610, void, OnUpdateBehaviour, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01446B50, bool, GetShouldPauseTree, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01446BA0, void, OnEndTurningBehaviourEvent, (app::MinerBuilderDialogBehaviour * this_ptr, app::EntityTask* behaviour, app::BehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x01446C00, void, HandleHint, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01446FE0, void, BeginInteraction, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01447290, void, EndInteraction, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014472C0, void, OnDialog, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014472E0, void, OnGoFixCanon, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::MinerBuilderDialogBehaviour * this_ptr))
} // namespace app::classes::MinerBuilderDialogBehaviour
