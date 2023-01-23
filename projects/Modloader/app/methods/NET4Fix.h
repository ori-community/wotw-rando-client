#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::NET4Fix {
    IL2CPP_REGISTER_METHOD(0x0257B400, app::String*, GetDirectoryName, (app::String * s))
}
