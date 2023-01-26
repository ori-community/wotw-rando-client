#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Stack_StackEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stack.h>

namespace app::classes::System::Collections::Stack_StackEnumerator {
    IL2CPP_REGISTER_METHOD(0x02032A90, void, ctor, (app::Stack_StackEnumerator * this_ptr, app::Stack* stack))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, Clone, (app::Stack_StackEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02032AC0, bool, MoveNext, (app::Stack_StackEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02032C90, app::Object*, get_Current, (app::Stack_StackEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02032DA0, void, Reset, (app::Stack_StackEnumerator * this_ptr))
} // namespace app::classes::System::Collections::Stack_StackEnumerator
