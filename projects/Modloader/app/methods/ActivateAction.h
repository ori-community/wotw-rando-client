#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActivateAction.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ActivateAction {
    IL2CPP_REGISTER_METHOD(0x004C6F90, void, OnValidate, app::ActivateAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C7090, void, Perform, app::ActivateAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x004C73A0, void, Serialize, app::ActivateAction* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x004C7520, app::String*, get_TargetName, app::ActivateAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C7600, app::String*, GetNiceName, app::ActivateAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::GameObject*, GetDynamicGraphicTarget, app::ActivateAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C7750, void, ctor, app::ActivateAction* this_ptr)
} // namespace app::classes::ActivateAction
