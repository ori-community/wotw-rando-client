#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Enum_.h>
#include <Modloader/app/structs/Enum.h>
#include <Modloader/app/structs/Enum__Array.h>

namespace app::classes::System::Collections::Generic::List_1_System_Enum_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_System_Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Enum_ * this_ptr, app::Enum item))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Enum__Array*, ToArray, (app::List_1_System_Enum_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_System_Enum_
