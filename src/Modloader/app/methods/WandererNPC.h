#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/MessageBox_HideAction__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WandererEntity.h>
#include <Modloader/app/structs/WandererNPC.h>
#include <Modloader/app/structs/WandererNPC_InteractionLine.h>
#include <Modloader/app/structs/WandererNPC_State__Enum.h>

namespace app::classes::WandererNPC {
    IL2CPP_REGISTER_METHOD(0x008C8AB0, bool, get_IsInInteractionRange, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C8D00, bool, get_IsInIKRange, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C8F10, bool, IsInGreetingRange, app::WandererNPC* this_ptr, app::Vector3 pos, float radius)
    IL2CPP_REGISTER_METHOD(0x008C91E0, app::GroundEntityLocomotion*, get_Locomotion, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C92C0, void, Start, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004B67E0, app::WandererNPC_State__Enum, get_CurrentState, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C95C0, void, ChangeState, app::WandererNPC* this_ptr, app::WandererNPC_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x008C95E0, void, FixedUpdate, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C9E60, void, OnEnterIdle, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CA000, void, UpdateGreeting, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CA8F0, void, UpdateIK, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CB1E0, void, UpdateIdle, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CC200, bool, FinishedTurning, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CC730, void, OnStartInteraction, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CC990, void, OnEndInteraction, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitIdle, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CCCF0, void, OnEnterMoveOriToPosition, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMoveOriToPosition, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CD1E0, void, OnExitMoveOriToPosition, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CD480, void, PlayTalk, app::WandererNPC* this_ptr, app::WandererNPC_InteractionLine* line)
    IL2CPP_REGISTER_METHOD(0x008CD5D0, void, OnFirstIntroduction, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CD7E0, void, OnIntroductionMessageHide, app::WandererNPC* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x008CDA10, void, OnFirstIntroductionEnd, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CDB70, void, OnAfterIntroduction, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CDDC0, void, OnAfterIntroductionMessageHide, app::WandererNPC* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x008CDFF0, void, OnQuestCompleteInteraction, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CE0D0, void, OriHandOutAnimationFinished, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CE1A0, void, OriBackToIdle, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CE4A0, void, GiveUpNeedle, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CEAF0, void, HideQuestItem, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CED10, void, KeepNeedle, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CED20, void, OnQuestCompleteEnd, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CEE60, void, ItemTaken, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CF060, void, OnQuestCompleteMessageHide, app::WandererNPC* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x008CF780, void, OnAfterQuestCompleteInteraction, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CF9D0, void, OnPostQuestCompleteMessageHide, app::WandererNPC* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x008CFC00, void, OnDestroy, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CFD80, void, OnDisable, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008CFE70, void, ShowReward, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008D0190, void, ThrowReward, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008D0570, void, HandOutReward, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008D0A50, void, RewardTaken, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, app::WandererNPC* this_ptr, app::Archive* ar, app::WandererEntity* entity)
    IL2CPP_REGISTER_METHOD(0x008D0FB0, void, ctor, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008D1020, void, _RewardTaken_b__126_1, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008D12A0, void, _RewardTaken_b__126_3, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_1, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_2, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_3, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_4, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_5, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_6, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_7, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_8, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_9, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_10, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_11, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_12, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_13, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_14, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_15, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_16, app::WandererNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IMoonTypeResolver*, GetResolverForType_17, app::WandererNPC* this_ptr)
} // namespace app::classes::WandererNPC
