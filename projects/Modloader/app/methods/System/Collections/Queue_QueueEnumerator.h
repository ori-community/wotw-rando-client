#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Queue_QueueEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue.h>

namespace app::classes::System::Collections::Queue_QueueEnumerator {
    IL2CPP_REGISTER_METHOD(0x0202C5A0, void, ctor, (app::Queue_QueueEnumerator * this_ptr, app::Queue* q))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, Clone, (app::Queue_QueueEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202C5E0, bool, MoveNext, (app::Queue_QueueEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202C760, app::Object*, get_Current, (app::Queue_QueueEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202C880, void, Reset, (app::Queue_QueueEnumerator * this_ptr))
} // namespace app::classes::System::Collections::Queue_QueueEnumerator
