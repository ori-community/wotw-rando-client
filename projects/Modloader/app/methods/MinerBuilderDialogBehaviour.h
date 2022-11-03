#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MinerBuilderDialogBehaviour {
    IL2CPP_REGISTER_METHOD(0x008519C0, app::BuilderNPC_State__Enum, get_DialogState, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519D0, void, set_DialogState, (app::MinerBuilderDialogBehaviour * this_ptr, app::BuilderNPC_State__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014461C0, void, OnExecute, (app::MinerBuilderDialogBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x01446460, void, OnEndBehaviour, (app::MinerBuilderDialogBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x01446610, void, OnUpdateBehaviour, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01446B50, bool, GetShouldPauseTree, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01446BA0, void, OnEndTurningBehaviourEvent, (app::MinerBuilderDialogBehaviour * this_ptr, app::EntityTask* behaviour, app::BehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHODINFO(0x04713900, MinerBuilderDialogBehaviour_OnEndTurningBehaviourEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01446C00, void, HandleHint, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01446FE0, void, BeginInteraction, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01447290, void, EndInteraction, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014472C0, void, OnDialog, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047033E0, MinerBuilderDialogBehaviour_OnDialog__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014472E0, void, OnGoFixCanon, (app::MinerBuilderDialogBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477A460, MinerBuilderDialogBehaviour_OnGoFixCanon__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::MinerBuilderDialogBehaviour * this_ptr))
} // namespace app::classes::MinerBuilderDialogBehaviour
