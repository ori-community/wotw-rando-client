#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/hdRumbleCreator.h>

namespace app::classes::hdRumbleCreator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::hdRumbleCreator* this_ptr)
}
