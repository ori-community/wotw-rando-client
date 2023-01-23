#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Stack_StackEnumerator.h>
#include <Modloader/app/structs/Stack.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Stack_StackEnumerator {
    IL2CPP_REGISTER_METHOD(0x02032A90, void, ctor, (app::Stack_StackEnumerator * this_ptr, app::Stack* stack))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, Clone, (app::Stack_StackEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02032AC0, bool, MoveNext, (app::Stack_StackEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473B580, Stack_StackEnumerator_MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02032C90, app::Object*, get_Current, (app::Stack_StackEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04720258, Stack_StackEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02032DA0, void, Reset, (app::Stack_StackEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04797AB0, Stack_StackEnumerator_Reset__MethodInfo)
} // namespace app::classes::System::Collections::Stack_StackEnumerator
