#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnyConditions_1.h>
#include <Modloader/app/structs/ICondition__Array.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::fsm::AnyConditions {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::AnyConditions_1* this_ptr, app::ICondition__Array* conditions)
    IL2CPP_REGISTER_METHOD(0x00F6CA30, bool, Validate, app::AnyConditions_1* this_ptr, app::IContext* context)
} // namespace app::classes::fsm::AnyConditions
