#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ShaderPrewarmOperation.h>

namespace app::classes::frameworks::loading::Prewarmers::ShaderPrewarmOperation {
    IL2CPP_REGISTER_METHOD(0x00F62000, void, ctor, (app::ShaderPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F620D0, bool, Begin, (app::ShaderPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F621B0, bool, Update, (app::ShaderPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F62450, void, UnloadScene, (app::ShaderPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F62580, bool, FinishImmediately, (app::ShaderPrewarmOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F62620, int32_t, DebugDrawStatus, (app::ShaderPrewarmOperation * this_ptr, int32_t xbegin, int32_t ybegin))
} // namespace app::classes::frameworks::loading::Prewarmers::ShaderPrewarmOperation
