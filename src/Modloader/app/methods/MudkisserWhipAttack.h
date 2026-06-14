#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MudkisserWhipAttack.h>

namespace app::classes::MudkisserWhipAttack {
    IL2CPP_REGISTER_METHOD(0x00420FE0, void, ctor, app::MudkisserWhipAttack* this_ptr)
}
