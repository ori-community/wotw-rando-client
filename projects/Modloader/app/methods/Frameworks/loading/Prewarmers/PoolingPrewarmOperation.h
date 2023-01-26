#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PoolingPrewarmOperation.h>

namespace app::classes::frameworks::loading::Prewarmers::PoolingPrewarmOperation {
    IL2CPP_REGISTER_METHOD(0x00F61760, void, ctor, (app::PoolingPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F618A0, bool, Begin, (app::PoolingPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F61A10, bool, Update, (app::PoolingPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F61B00, bool, FinishImmediately, (app::PoolingPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F61C10, int32_t, DebugDrawStatus, (app::PoolingPrewarmOperation * this_ptr, int32_t xbegin, int32_t ybegin))
} // namespace app::classes::frameworks::loading::Prewarmers::PoolingPrewarmOperation
