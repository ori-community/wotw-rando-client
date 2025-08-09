#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpellShardCompatibility.h>

namespace app::classes::SpellShardCompatibility {
    IL2CPP_REGISTER_METHOD(0x009440A0, void, ctor, app::SpellShardCompatibility* this_ptr)
}
