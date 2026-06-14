#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpellDescription.h>

namespace app::classes::SpellDescription {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SpellDescription* this_ptr)
}
