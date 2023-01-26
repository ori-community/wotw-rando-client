#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PathTracerOutput.h>

namespace app::classes::PathTracerOutput {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PathTracerOutput * this_ptr))
}
