#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RestoreHealthAction {
    IL2CPP_REGISTER_METHOD(0x0090CC90, void, Perform, (app::RestoreHealthAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0090CE60, void, Serialize, (app::RestoreHealthAction * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0090CE80, void, ctor, (app::RestoreHealthAction * this_ptr))
} // namespace app::classes::RestoreHealthAction
