#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XAsyncBlockPtr.h>
#include <Modloader/app/structs/XAsyncCompletionRoutine.h>
#include <Modloader/app/structs/XTaskQueueHandle.h>

namespace app::classes::XGamingRuntime::Interop::AsyncHelpers {
    IL2CPP_REGISTER_METHOD(0x030AFB50, app::XAsyncBlockPtr, WrapAsyncBlock, app::XTaskQueueHandle queue, app::XAsyncCompletionRoutine* callback)
    IL2CPP_REGISTER_METHOD(0x030B0020, void, CleanupAsyncBlock, app::XAsyncBlockPtr block)
    IL2CPP_REGISTER_METHOD(0x030B0150, void, AsyncBlockCallback, app::XAsyncBlockPtr block)
} // namespace app::classes::XGamingRuntime::Interop::AsyncHelpers
