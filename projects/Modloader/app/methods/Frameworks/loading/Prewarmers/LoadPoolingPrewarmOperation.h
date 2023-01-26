#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoadPoolingPrewarmOperation.h>

namespace app::classes::frameworks::loading::Prewarmers::LoadPoolingPrewarmOperation {
    IL2CPP_REGISTER_METHOD(0x00F60DA0, void, ctor, (app::LoadPoolingPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F60EA0, bool, Begin, (app::LoadPoolingPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F60F80, bool, Update, (app::LoadPoolingPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F610C0, void, Unload, (app::LoadPoolingPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, FinishImmediately, (app::LoadPoolingPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5D850, int32_t, DebugDrawStatus, (app::LoadPoolingPrewarmOperation * this_ptr, int32_t xbegin, int32_t ybegin))
} // namespace app::classes::frameworks::loading::Prewarmers::LoadPoolingPrewarmOperation
