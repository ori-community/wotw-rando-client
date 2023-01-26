#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MenuTabEntry.h>

namespace app::classes::MenuTabEntry {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MenuTabEntry * this_ptr))
}
