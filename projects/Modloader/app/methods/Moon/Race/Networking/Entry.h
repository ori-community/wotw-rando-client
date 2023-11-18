#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Entry.h>

namespace app::classes::Moon::Race::Networking::Entry {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Entry * this_ptr))
}
