#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RecordEntry.h>

namespace app::classes::PhysicsDebugTools::RecordEntry {
    IL2CPP_REGISTER_METHOD(0x014FDEF0, void, ctor, app::RecordEntry* this_ptr)
}
