#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/BuilderNPC.h>
#include <Modloader/app/structs/BuilderNPC_State__Enum.h>
#include <Modloader/app/structs/MessageBox_HideAction__Enum.h>

namespace app::classes::BuilderNPC {
    IL2CPP_REGISTER_METHOD(0x0061E5E0, app::BuilderNPC_State__Enum, get_CurrentState, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00819230, void, ChangeState, app::BuilderNPC* this_ptr, app::BuilderNPC_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x008192E0, void, Advance, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008193C0, void, OnEnterIdle, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateIdle, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitIdle, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008193D0, void, OnEnterPurchase, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdatePurchase, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitPurchase, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00819580, void, OnInteractionMessageHide, app::BuilderNPC* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x00819830, void, OnEnterHubOffer, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00819B60, void, OnFirstEncounterMessageHide, app::BuilderNPC* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateHubOffer, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitHubOffer, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00819B70, void, OnInteractionHubOfferMessageHide, app::BuilderNPC* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x0081A100, void, GoToIdle, app::BuilderNPC* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x0081A120, void, OnResumeAfterLiftFix, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0081A4B0, void, OnResumeAfterSaveFix, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0081A840, void, OnFixSaveMessageHide, app::BuilderNPC* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x0081A8D0, void, OnFixLiftMessageHide, app::BuilderNPC* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x0081A940, void, OnEnterFixCannon, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateFixCannon, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitFixCannon, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0081AAF0, void, OnFixCannonMessageHide, app::BuilderNPC* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x0081AB40, void, OnFixCannonDoneMessageHide, app::BuilderNPC* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x0081AB70, void, OnresumeAfterFix, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0081AD70, void, Serialize, app::BuilderNPC* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x0081ADA0, void, ctor, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0081A100, void, _OnInteractionMessageHide_b__39_0, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0081A100, void, _OnInteractionMessageHide_b__39_1, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0081B0E0, void, _OnInteractionHubOfferMessageHide_b__44_0, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0081B620, void, _OnInteractionHubOfferMessageHide_b__44_1, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0081A100, void, _OnInteractionHubOfferMessageHide_b__44_2, app::BuilderNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0081A100, void, _OnResumeAfterLiftFix_b__46_0, app::BuilderNPC* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x0081A100, void, _OnResumeAfterSaveFix_b__47_0, app::BuilderNPC* this_ptr, app::MessageBox_HideAction__Enum action)
} // namespace app::classes::BuilderNPC
