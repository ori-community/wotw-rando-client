#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StateMachineAttribute.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::CompilerServices::StateMachineAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_StateMachineType, (app::StateMachineAttribute * this_ptr, app::Type* value))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::StateMachineAttribute * this_ptr, app::Type* state_machine_type))
} // namespace app::classes::System::Runtime::CompilerServices::StateMachineAttribute
