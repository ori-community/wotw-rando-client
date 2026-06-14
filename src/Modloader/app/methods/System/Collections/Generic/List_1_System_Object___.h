#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Object__1.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Object__Array__Array.h>

namespace app::classes::System::Collections::Generic::List_1_System_Object___ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_System_Object__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Object__Array__Array*, ToArray, app::List_1_System_Object__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_Object__1* this_ptr, app::Object__Array* item)
} // namespace app::classes::System::Collections::Generic::List_1_System_Object___
