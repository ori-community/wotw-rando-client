#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HitStop_Entry.h>

namespace app::classes::Moon::HitStop_Entry {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::HitStop_Entry* this_ptr)
}
