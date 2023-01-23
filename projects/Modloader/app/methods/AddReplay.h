#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AddReplay.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ReplayModel.h>

namespace app::classes::AddReplay {
    IL2CPP_REGISTER_METHOD(0x02E8E010, void, ctor, (app::AddReplay * this_ptr, app::String* location, app::ReplayModel* replay))
}
