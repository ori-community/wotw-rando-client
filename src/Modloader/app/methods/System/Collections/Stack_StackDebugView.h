#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Stack.h>
#include <Modloader/app/structs/Stack_StackDebugView.h>

namespace app::classes::System::Collections::Stack_StackDebugView {
    IL2CPP_REGISTER_METHOD(0x020329D0, void, ctor, app::Stack_StackDebugView* this_ptr, app::Stack* stack)
    IL2CPP_REGISTER_METHOD(0x01DFFC10, app::Object__Array*, get_Items, app::Stack_StackDebugView* this_ptr)
} // namespace app::classes::System::Collections::Stack_StackDebugView
