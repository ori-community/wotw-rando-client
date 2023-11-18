#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InteractionBidingButton__Enum.h>
#include <Modloader/app/structs/Action_1_IContext_.h>
#include <Modloader/app/structs/ButtonDialogTransition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IDialogNode.h>
#include <Modloader/app/structs/InteractionBinding.h>

namespace app::classes::ButtonDialogTransition {
    IL2CPP_REGISTER_METHOD(0x003FC7F0, app::InteractionBidingButton__Enum, get_Button, (app::ButtonDialogTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::InteractionBinding*, get_InteractionBinding, (app::ButtonDialogTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::Action_1_IContext_*, get_OnActivated, (app::ButtonDialogTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_OnActivated, (app::ButtonDialogTransition * this_ptr, app::Action_1_IContext_* value))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::Action_1_IContext_*, get_OnFinished, (app::ButtonDialogTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_OnFinished, (app::ButtonDialogTransition * this_ptr, app::Action_1_IContext_* value))
    IL2CPP_REGISTER_METHOD(0x0081E230, void, OnOwnerEnter, (app::ButtonDialogTransition * this_ptr, app::IDialogNode* owner))
    IL2CPP_REGISTER_METHOD(0x0081E470, void, OnOwnerExit, (app::ButtonDialogTransition * this_ptr, app::IDialogNode* owner))
    IL2CPP_REGISTER_METHOD(0x0081E500, void, OnButtonPressed, (app::ButtonDialogTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0081E5A0, app::IDialogNode*, get_TransitionDestination, (app::ButtonDialogTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585310, bool, Validate, (app::ButtonDialogTransition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ButtonDialogTransition * this_ptr))
} // namespace app::classes::ButtonDialogTransition
