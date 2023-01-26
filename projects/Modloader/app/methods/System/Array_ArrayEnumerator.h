#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array_ArrayEnumerator.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_ArrayEnumerator {
    IL2CPP_REGISTER_METHOD(0x02296A30, void, ctor, (app::Array_ArrayEnumerator * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x02296A70, bool, MoveNext, (app::Array_ArrayEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C2BCA0, void, Reset, (app::Array_ArrayEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, Clone, (app::Array_ArrayEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02296A90, app::Object*, get_Current, (app::Array_ArrayEnumerator * this_ptr))
} // namespace app::classes::System::Array_ArrayEnumerator
