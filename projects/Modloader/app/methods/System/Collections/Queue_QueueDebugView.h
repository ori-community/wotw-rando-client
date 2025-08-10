#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Queue.h>
#include <Modloader/app/structs/Queue_QueueDebugView.h>

namespace app::classes::System::Collections::Queue_QueueDebugView {
    IL2CPP_REGISTER_METHOD(0x0202C4E0, void, ctor, app::Queue_QueueDebugView* this_ptr, app::Queue* queue)
    IL2CPP_REGISTER_METHOD(0x01DFFC10, app::Object__Array*, get_Items, app::Queue_QueueDebugView* this_ptr)
} // namespace app::classes::System::Collections::Queue_QueueDebugView
