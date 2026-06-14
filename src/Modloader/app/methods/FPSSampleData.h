#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FPSSampleData.h>

namespace app::classes::FPSSampleData {
    IL2CPP_REGISTER_METHOD(0x0098B450, void, ctor, app::FPSSampleData* this_ptr)
}
