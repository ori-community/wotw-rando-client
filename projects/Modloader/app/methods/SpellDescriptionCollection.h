#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpellDescriptionCollection.h>

namespace app::classes::SpellDescriptionCollection {
    IL2CPP_REGISTER_METHOD(0x00EF8900, void, ctor, (app::SpellDescriptionCollection * this_ptr))
}
