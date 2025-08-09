#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpellIconsCollection.h>

namespace app::classes::SpellIconsCollection {
    IL2CPP_REGISTER_METHOD(0x00EF8980, void, ctor, app::SpellIconsCollection* this_ptr)
}
