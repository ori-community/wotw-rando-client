#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::frameworks::loading::Prewarmers::ClearPoolingRefsPrewarmOperation {
    IL2CPP_REGISTER_METHOD(0x00F5E7C0, void, ctor, (app::ClearPoolingRefsPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5E970, bool, Begin, (app::ClearPoolingRefsPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5EB10, bool, Update, (app::ClearPoolingRefsPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5EDD0, bool, FinishImmediately, (app::ClearPoolingRefsPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5D850, int32_t, DebugDrawStatus, (app::ClearPoolingRefsPrewarmOperation * this_ptr, int32_t xbegin, int32_t ybegin))
} // namespace app::classes::frameworks::loading::Prewarmers::ClearPoolingRefsPrewarmOperation
