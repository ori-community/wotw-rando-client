#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberPresetData.h>

namespace app::classes::UberPresetData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberPresetData * this_ptr))
}
