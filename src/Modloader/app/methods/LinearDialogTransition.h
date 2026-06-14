#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IDialogNode.h>
#include <Modloader/app/structs/LinearDialogTransition.h>

namespace app::classes::LinearDialogTransition {
    IL2CPP_REGISTER_METHOD(0x00FA74F0, app::IDialogNode*, get_TransitionDestination, app::LinearDialogTransition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnOwnerEnter, app::LinearDialogTransition* this_ptr, app::IDialogNode* owner)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnOwnerExit, app::LinearDialogTransition* this_ptr, app::IDialogNode* owner)
    IL2CPP_REGISTER_METHOD(0x00FA75B0, bool, Validate, app::LinearDialogTransition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::LinearDialogTransition* this_ptr)
} // namespace app::classes::LinearDialogTransition
