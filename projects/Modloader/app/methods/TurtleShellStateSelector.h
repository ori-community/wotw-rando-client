#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TurtleShellStateSelector.h>

namespace app::classes::TurtleShellStateSelector {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TurtleShellStateSelector * this_ptr))
}
