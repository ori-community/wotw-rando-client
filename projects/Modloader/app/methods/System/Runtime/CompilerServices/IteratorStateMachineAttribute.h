#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IteratorStateMachineAttribute.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::CompilerServices::IteratorStateMachineAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::IteratorStateMachineAttribute * this_ptr, app::Type* state_machine_type))
}
