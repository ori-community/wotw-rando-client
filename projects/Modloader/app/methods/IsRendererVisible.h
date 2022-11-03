#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::IsRendererVisible {
    IL2CPP_REGISTER_METHOD(0x00647560, bool, Validate, (app::IsRendererVisible * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::IsRendererVisible * this_ptr))
} // namespace app::classes::IsRendererVisible
