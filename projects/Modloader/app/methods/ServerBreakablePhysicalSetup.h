#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ServerBreakablePhysicalSetup {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerBreakablePhysicalSetup * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x00ABA180, app::Object*, CreateData, (app::ServerBreakablePhysicalSetup * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x00ABA5D0, app::Component_1*, ApplyData, (app::ServerBreakablePhysicalSetup * this_ptr, app::GameObject** gameobj))
    IL2CPP_REGISTER_METHOD(0x00ABA6F0, void, RebuildReferences, (app::ServerBreakablePhysicalSetup * this_ptr))
} // namespace app::classes::ServerBreakablePhysicalSetup
