#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SiniExampleSetup.h>

namespace app::classes::SiniExampleSetup {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SiniExampleSetup * this_ptr))
}
