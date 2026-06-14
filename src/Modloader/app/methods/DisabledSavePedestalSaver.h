#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DisabledSavePedestalSaver.h>

namespace app::classes::DisabledSavePedestalSaver {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::DisabledSavePedestalSaver* this_ptr)
}
