#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_RuntimeType_.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/RuntimeType__Array.h>

namespace app::classes::System::Collections::Generic::List_1_System_RuntimeType_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_System_RuntimeType_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_RuntimeType_ * this_ptr, app::RuntimeType* item))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::RuntimeType__Array*, ToArray, (app::List_1_System_RuntimeType_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_System_RuntimeType_
