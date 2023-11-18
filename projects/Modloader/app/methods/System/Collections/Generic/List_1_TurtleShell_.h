#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_TurtleShell_.h>
#include <Modloader/app/structs/TurtleShell.h>

namespace app::classes::System::Collections::Generic::List_1_TurtleShell_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_TurtleShell_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_TurtleShell_ * this_ptr, app::TurtleShell* item))
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_TurtleShell_ * this_ptr, app::TurtleShell* item))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_TurtleShell_ * this_ptr, app::TurtleShell* item))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_TurtleShell_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_TurtleShell_
