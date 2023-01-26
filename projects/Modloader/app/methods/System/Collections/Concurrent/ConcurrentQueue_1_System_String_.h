#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConcurrentQueue_1_System_String_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Concurrent::ConcurrentQueue_1_System_String_ {
    IL2CPP_REGISTER_METHOD(0x02F28970, void, Enqueue, (app::ConcurrentQueue_1_System_String_ * this_ptr, app::String* item))
    IL2CPP_REGISTER_METHOD(0x02F27A80, int32_t, get_Count, (app::ConcurrentQueue_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F28D50, bool, TryDequeue, (app::ConcurrentQueue_1_System_String_ * this_ptr, app::String** result))
    IL2CPP_REGISTER_METHOD(0x02F272B0, void, ctor, (app::ConcurrentQueue_1_System_String_ * this_ptr))
} // namespace app::classes::System::Collections::Concurrent::ConcurrentQueue_1_System_String_
