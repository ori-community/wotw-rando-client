#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConditionalDialogTransition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IDialogNode.h>

namespace app::classes::ConditionalDialogTransition {
    IL2CPP_REGISTER_METHOD(0x011E4120, app::IDialogNode*, get_TransitionDestination, app::ConditionalDialogTransition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnOwnerEnter, app::ConditionalDialogTransition* this_ptr, app::IDialogNode* owner)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnOwnerExit, app::ConditionalDialogTransition* this_ptr, app::IDialogNode* owner)
    IL2CPP_REGISTER_METHOD(0x011E41E0, bool, Validate, app::ConditionalDialogTransition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::ConditionalDialogTransition* this_ptr)
} // namespace app::classes::ConditionalDialogTransition
