#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpawnOrbsContext.h>

namespace app::classes::SpawnOrbsContext {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SpawnOrbsContext* this_ptr)
}
