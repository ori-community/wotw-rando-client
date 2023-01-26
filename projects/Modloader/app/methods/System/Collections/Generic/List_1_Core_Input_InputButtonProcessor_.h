#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Core_Input_InputButtonProcessor_.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/Input_InputButtonProcessor__Array.h>

namespace app::classes::System::Collections::Generic::List_1_Core_Input_InputButtonProcessor_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Core_Input_InputButtonProcessor_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Core_Input_InputButtonProcessor_ * this_ptr, app::Input_InputButtonProcessor* item))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Input_InputButtonProcessor__Array*, ToArray, (app::List_1_Core_Input_InputButtonProcessor_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_Core_Input_InputButtonProcessor_
