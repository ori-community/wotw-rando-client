#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::Threading::Semaphore {
    IL2CPP_REGISTER_METHOD(0x02A7AD80, void*, CreateSemaphore_internal, int32_t initial_count, int32_t maximum_count, app::String* name, int32_t* error_code)
    IL2CPP_REGISTER_METHOD(0x02A7AE10, bool, ReleaseSemaphore_internal, void* handle, int32_t release_count, int32_t* previous_count)
} // namespace app::classes::System::Threading::Semaphore
