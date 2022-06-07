#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::ExecutionContextSwitcher {
    IL2CPP_REGISTER_METHOD(0x00206F70, bool, UndoNoThrow, (app::ExecutionContextSwitcher__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00206F80, void, Undo, (app::ExecutionContextSwitcher__Boxed * this_ptr))
}
