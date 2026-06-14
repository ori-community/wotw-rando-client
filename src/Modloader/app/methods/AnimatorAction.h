#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimatorAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AnimatorAction {
    IL2CPP_REGISTER_METHOD(0x00503F60, void, Start, app::AnimatorAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005041A0, void, OnDestroy, app::AnimatorAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005041C0, void, TryInitialize, app::AnimatorAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00504420, void, Perform, app::AnimatorAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x005046D0, app::String*, get_TargetName, app::AnimatorAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00504860, app::String*, GetNiceName, app::AnimatorAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::AnimatorAction* this_ptr)
} // namespace app::classes::AnimatorAction
