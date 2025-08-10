#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TurtleShell.h>

namespace app::classes::ActiveTurtleShells {
    IL2CPP_REGISTER_METHOD(0x004C9C50, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x004C9D30, void, RegisterShell, app::TurtleShell* shell)
    IL2CPP_REGISTER_METHOD(0x004C9DF0, void, UnregisterShell, app::TurtleShell* shell)
    IL2CPP_REGISTER_METHOD(0x004C9F10, void, cctor, )
} // namespace app::classes::ActiveTurtleShells
