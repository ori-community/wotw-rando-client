#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::frameworks::loading::Prewarmers::ResourcesLoadPrewarmOperation {
    IL2CPP_REGISTER_METHOD(0x00F61D00, void, ctor, (app::ResourcesLoadPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5DE70, bool, Begin, (app::ResourcesLoadPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F61DA0, bool, Update, (app::ResourcesLoadPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F61E30, void, PerformStep, (app::ResourcesLoadPrewarmOperation * this_ptr, int32_t step))
    IL2CPP_REGISTER_METHOD(0x00F61FC0, bool, FinishImmediately, (app::ResourcesLoadPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5D850, int32_t, DebugDrawStatus, (app::ResourcesLoadPrewarmOperation * this_ptr, int32_t xbegin, int32_t ybegin))
}
