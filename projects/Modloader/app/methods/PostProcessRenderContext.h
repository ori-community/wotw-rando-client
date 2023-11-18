#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PostProcessRenderContext.h>

namespace app::classes::PostProcessRenderContext {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PostProcessRenderContext * this_ptr))
}
