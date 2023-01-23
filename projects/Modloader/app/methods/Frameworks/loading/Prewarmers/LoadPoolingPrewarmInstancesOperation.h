#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LoadPoolingPrewarmInstancesOperation.h>

namespace app::classes::frameworks::loading::Prewarmers::LoadPoolingPrewarmInstancesOperation {
    IL2CPP_REGISTER_METHOD(0x00F60BE0, void, ctor, (app::LoadPoolingPrewarmInstancesOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F60CC0, bool, Begin, (app::LoadPoolingPrewarmInstancesOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F60AB0, bool, Update, (app::LoadPoolingPrewarmInstancesOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, FinishImmediately, (app::LoadPoolingPrewarmInstancesOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5D850, int32_t, DebugDrawStatus, (app::LoadPoolingPrewarmInstancesOperation * this_ptr, int32_t xbegin, int32_t ybegin))
} // namespace app::classes::frameworks::loading::Prewarmers::LoadPoolingPrewarmInstancesOperation
