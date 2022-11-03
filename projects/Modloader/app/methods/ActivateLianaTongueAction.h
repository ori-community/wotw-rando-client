#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ActivateLianaTongueAction {
    IL2CPP_REGISTER_METHOD(0x004C8B80, void, Perform, (app::ActivateLianaTongueAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ActivateLianaTongueAction * this_ptr))
} // namespace app::classes::ActivateLianaTongueAction
