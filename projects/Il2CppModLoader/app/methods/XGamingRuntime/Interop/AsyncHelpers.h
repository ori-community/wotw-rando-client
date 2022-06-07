#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::XGamingRuntime::Interop::AsyncHelpers {
    IL2CPP_REGISTER_METHOD(0x030AFB50, app::XAsyncBlockPtr, WrapAsyncBlock, (app::XTaskQueueHandle queue, app::XAsyncCompletionRoutine * callback))
    IL2CPP_REGISTER_METHOD(0x030B0020, void, CleanupAsyncBlock, (app::XAsyncBlockPtr block))
    IL2CPP_REGISTER_METHOD(0x030B0150, void, AsyncBlockCallback, (app::XAsyncBlockPtr block))
    IL2CPP_REGISTER_METHODINFO(0x04758830, AsyncHelpers_AsyncBlockCallback__MethodInfo)
}
