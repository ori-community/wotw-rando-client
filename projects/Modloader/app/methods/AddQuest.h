#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AddQuest {
    IL2CPP_REGISTER_METHOD(0x004CA090, void, Perform, (app::AddQuest * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::AddQuest * this_ptr))
} // namespace app::classes::AddQuest
