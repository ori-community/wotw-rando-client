#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IDialogActor.h>
#include <Modloader/app/structs/DialogNode.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Action_1_IContext_.h>
#include <Modloader/app/structs/List_1_IDialogTransition_.h>
#include <Modloader/app/structs/List_1_IDialogDecorator_.h>
#include <Modloader/app/structs/InteractionSettings.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::DialogNode {
    IL2CPP_REGISTER_METHOD(0x00B900E0, app::IDialogActor*, get_Actor, (app::DialogNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::MessageProvider*, get_MessageProvider, (app::DialogNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::Action_1_IContext_*, get_OnActivated, (app::DialogNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_OnActivated, (app::DialogNode * this_ptr, app::Action_1_IContext_* value))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::Action_1_IContext_*, get_OnFinished, (app::DialogNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_OnFinished, (app::DialogNode * this_ptr, app::Action_1_IContext_* value))
    IL2CPP_REGISTER_METHOD(0x00B901A0, app::List_1_IDialogTransition_*, get_Transitions, (app::DialogNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B903E0, app::List_1_IDialogDecorator_*, get_Decorators, (app::DialogNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B90620, bool, get_MessageActiveAndEnable, (app::DialogNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B90840, bool, get_HasInteractibleTransitions, (app::DialogNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::InteractionSettings*, get_InteractionSettings, (app::DialogNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B90840, bool, get_HideUiHidables, (app::DialogNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B900E0, app::IDialogActor*, get_ResolvedActor, (app::DialogNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B90860, void, Initialize, (app::DialogNode * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::DialogNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B908F0, void, OnEnter, (app::DialogNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B911D0, void, OnExit, (app::DialogNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B91440, int32_t, GetStateId, (app::DialogNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B91450, void, ctor, (app::DialogNode * this_ptr))
} // namespace app::classes::DialogNode
