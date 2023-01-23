#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XalPostProcess.h>

namespace app::classes::XalPostProcess {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XalPostProcess * this_ptr))
}
