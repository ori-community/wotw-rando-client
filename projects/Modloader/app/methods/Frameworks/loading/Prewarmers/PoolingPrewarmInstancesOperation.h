#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::frameworks::loading::Prewarmers::PoolingPrewarmInstancesOperation {
    IL2CPP_REGISTER_METHOD(0x00F612E0, void, ctor, (app::PoolingPrewarmInstancesOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F613B0, bool, Begin, (app::PoolingPrewarmInstancesOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F614E0, bool, Update, (app::PoolingPrewarmInstancesOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F61660, bool, FinishImmediately, (app::PoolingPrewarmInstancesOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F61670, int32_t, DebugDrawStatus, (app::PoolingPrewarmInstancesOperation * this_ptr, int32_t xbegin, int32_t ybegin))
} // namespace app::classes::frameworks::loading::Prewarmers::PoolingPrewarmInstancesOperation
