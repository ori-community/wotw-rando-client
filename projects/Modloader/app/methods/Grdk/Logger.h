#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Grdk::Logger {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Log, (app::String * message))
}
