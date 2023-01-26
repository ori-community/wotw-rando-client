#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeLabel__Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::RuntimeLabel {
    IL2CPP_REGISTER_METHOD(0x001EAD90, void, ctor, (app::RuntimeLabel__Boxed * this_ptr, int32_t index, int32_t continuation_stack_depth, int32_t stack_depth))
    IL2CPP_REGISTER_METHOD(0x001EADA0, app::String*, ToString, (app::RuntimeLabel__Boxed * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::RuntimeLabel
