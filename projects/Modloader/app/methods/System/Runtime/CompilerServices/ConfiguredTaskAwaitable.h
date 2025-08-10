#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable__Boxed.h>
#include <Modloader/app/structs/Task.h>

namespace app::classes::System::Runtime::CompilerServices::ConfiguredTaskAwaitable {
    IL2CPP_REGISTER_METHOD(0x0018EE90, void, ctor, app::ConfiguredTaskAwaitable__Boxed* this_ptr, app::Task* task, bool continue_on_captured_context)
    IL2CPP_REGISTER_METHOD(0x0010A980, app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter, GetAwaiter, app::ConfiguredTaskAwaitable__Boxed* this_ptr)
} // namespace app::classes::System::Runtime::CompilerServices::ConfiguredTaskAwaitable
