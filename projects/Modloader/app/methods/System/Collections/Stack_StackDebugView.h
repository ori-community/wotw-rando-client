#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Stack_StackDebugView {
    IL2CPP_REGISTER_METHOD(0x020329D0, void, ctor, (app::Stack_StackDebugView * this_ptr, app::Stack* stack))
    IL2CPP_REGISTER_METHODINFO(0x0470D358, Stack_StackDebugView__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DFFC10, app::Object__Array*, get_Items, (app::Stack_StackDebugView * this_ptr))
} // namespace app::classes::System::Collections::Stack_StackDebugView
