#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AlwaysCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::fsm::AlwaysCondition {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, Validate, app::AlwaysCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AlwaysCondition* this_ptr)
} // namespace app::classes::fsm::AlwaysCondition
